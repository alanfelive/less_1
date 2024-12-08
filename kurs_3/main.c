#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>
#include "temp_api.h"

#define SIZE 30
#define MAX 1000000

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, ".utf-8");
    time_t current_time = time(NULL);
    FILE *source = NULL;
    struct tm *now = localtime(&current_time);
    char filename[50], type_stat[6];
    int rez = 0, inp_month = 0, inp_year = 0, flag = 0;
    opterr = 0;
    if (argc <= 1)
    {
        printf("Не заданы параметры! Для помощи запустите программу с ключом -h");
        return 0;
    }
    while ((rez = getopt(argc, argv, "hf:m::y::s:")) != -1)
    {
        switch (rez)
        {
            case 'h':
                printf("Вас приветствует программа для вывода статистических данных наблюдений.\n\
                    Параметры:\n\
                        -f - файл с данными датчика температуры;\n\
                        -m - месяц (по умолчанию текущий);\n\
                        -y - год (по умолчанию текущий)\n\
                        -s - статистика по температуре:\n\
                            mean - средняя за период,\n\
                            max - максимальная за период,\n\
                            min - минимальная за период.\n\
                    Пример: prog.exe -f\"temperature.csv\" -m 5 -y 2021 -s max\
                ");
            break;
            case 'f':
                strcpy(filename, optarg);
            break;
            case 'm':
            {
                if(atoi(optarg) > 0 && atoi(optarg) < 13)
                {
                    inp_month = atoi(optarg);
                    flag = 1;
                }
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
            case 's':
                strcpy(type_stat, optarg);
            break;
            case '?':
                printf("Ошибка ввода параметров! Используйте параметр -h для просмотра справки\n");
                return 0;
            break;
        }
    }
    source = fopen(filename, "r");
    if (source == NULL)
    {
        return 1;
    }
    struct sensor *temp_info = calloc(MAX, sizeof(struct sensor));
    char row[SIZE];
    long int num_row = 0;
    int row_error = 0;
    while (fgets(row, MAX, source))
    {
        row_error++;
        if (sscanf(row, "%d;%d;%d;%d;%d;%d",
                    &temp_info[num_row].year,
                    &temp_info[num_row].month,
                    &temp_info[num_row].day,
                    &temp_info[num_row].hour,
                    &temp_info[num_row].minute,
                    &temp_info[num_row].temp
                    ) == 6)
            num_row++;
        else
            printf("ошибка в строке %d: %s", row_error, row);
    }
    fclose(source);
    float stat_temp;
    int S;
    if (flag)
    {
        if (!strcmp(type_stat,"mean"))
            stat_temp = AverageMonthlyTemperature(temp_info, num_row, inp_month, inp_year);
        if (!strcmp(type_stat,"min"))
            stat_temp = MinimumTemperatureInAMonth(temp_info, num_row, inp_month, inp_year);
        if (!strcmp(type_stat,"max"))
            stat_temp = MaximumTemperatureInAMonth(temp_info, num_row, inp_month, inp_year);
    }
    else
    {
        if (!strcmp(type_stat,"mean"))
            stat_temp = AverageAnnualTemperature(temp_info, num_row, inp_year); // средняя t за год
        if (!strcmp(type_stat,"min"))
            stat_temp = MinimumTemperatureForTheYear(temp_info, num_row, inp_year);
        if (!strcmp(type_stat,"max"))
            stat_temp = MaximumTemperatureForTheYear(temp_info, num_row, inp_year);
    }
    if (stat_temp == 1000 || stat_temp == -1000)
        printf("Нет данных за выбранный период");
    else
        printf("%.1f", stat_temp);
    return 0;
}