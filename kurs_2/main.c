#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>
#include "temp_api.h"

#define SIZE 30
#define MAX 30

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, ".utf-8");
    time_t current_time = time(NULL);
    struct tm *now = localtime(&current_time);
    char filename[50], select_stat[6];
    int rez = 0, inp_month = 0, inp_year = 0;
    opterr = 0;
    while ((rez = getopt(argc, argv, "hs:f:m::y::")) != -1)
    {
        switch (rez)
        {
            case 'h':
                printf("Вас приветствует программа для вывода статистических данных наблюдений.\n\
                    Параметры:\n\
                        -f - файл с данными датчика температуры;\n\
                        -m - месяц (по умолчанию текущий);\n\
                        -y - год (по умолчанию текущий)\n\
                        -s - статистика по температуре за период:\n\
                            meanY - средняя за год,\n\
                            meanM - средняя за месяц,\n\
                            maxY - максимальная за год,\n\
                            maxM - максимальная за месяц,\n\
                            minY - минимальная за год,\n\
                            minM - минимальная за месяц.\n\
                    Пример: .exe -f\"temperature.csv\" -m 5 -y 2021 -t mean\
                ");
            break;
            case 'f':
                strcpy(filename, optarg);
            break;
            case 's':
                strcpy(select_stat, optarg);
            break;
            case 'm':
            {
                if(atoi(optarg) > 0 && atoi(optarg) < 13)
                    inp_month = atoi(optarg);
                else
                    inp_month = now -> tm_mon + 1;
            }
            break;
            case 'y':
            {
                if(atoi(optarg) > 2010 && atoi(optarg) < now -> tm_year + 1900)
                    inp_year = atoi(optarg);
                else
                    inp_year = now -> tm_year + 1900;
            }
            break;
            case '?':
                printf("Ошибка ввода параметров! Используйте параметр -h для просмотра справки\n");
            break;
        }
    }
    FILE *source = fopen(filename, "r");
    if (source == NULL)
    {
        fprintf(stderr, "Нет такого файла: %s\n", strerror(errno));
        return 1;
    }
    int Y, M, D, hr, min, temp;
    struct sensor temperature_information[SIZE];
    char row[MAX];
    int num_row = 0;
    int row_error = 0;
    while (fgets(row, MAX, source))
    {
        row_error++;
        if (sscanf(row, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &hr, &min, &temp) == 6)
        {
            // AddRecord(temperature_information, num_row, Y, M, D, hr, min, temp);
            printf("%.d", num_row++);
            // num_row++;
        }
        else
        {
            printf("ошибка в строке %d: %s", row_error, row);
        }
    }
    fclose(source);
    float stat_temp;
    if (!strcmp(select_stat,"meanY"))
        stat_temp = AverageAnnualTemperature(temperature_information, num_row, inp_year);
    if (!strcmp(select_stat,"minY"))
        stat_temp = MinimumTemperatureForTheYear(temperature_information, num_row, inp_year);
    if (!strcmp(select_stat,"maxY"))
        stat_temp = MaximumTemperatureForTheYear(temperature_information, num_row, inp_year);
    if (!strcmp(select_stat,"meanM"))
        stat_temp = AverageMonthlyTemperature(temperature_information, num_row, inp_year, inp_month);
    if (!strcmp(select_stat,"minM"))
        stat_temp = AverageMonthlyTemperature(temperature_information, num_row, inp_year, inp_month);
    if (!strcmp(select_stat,"maxM"))
        stat_temp = AverageMonthlyTemperature(temperature_information, num_row, inp_year, inp_month);
    if (stat_temp == 1000 || stat_temp == -1000)
        printf("Нет данных за выбранный период");
    else
        printf("%.1f", stat_temp);
    return 0;
}