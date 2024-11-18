#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <locale.h>
#include "temp_api.h"

#define SIZE 30
#define MAX 30

int main(void)
{
    int Y_in, M_in, Y, M, D, h, m, t;
    char filename[30];
    struct sensor temperature_information[SIZE];
    setlocale(LC_ALL, ".utf-8");
    printf("Введите имя файла с данными:\n");
    scanf("%s", &filename);
    FILE *source = fopen(filename, "r");
    if (source == NULL) {
        fprintf(stderr, "нет такого файла: %s\n", strerror(errno));
        return 1;
    }
    char row[MAX];
    int num_row = 0;
    int row_error = 0;
    while (fgets(row, MAX, source))
    {
        row_error++;
        if (sscanf(row, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &h, &m, &t) == 6)
        {
            AddRecord(temperature_information, num_row, Y, M, D, h, m, t);
            num_row++;
        } else {
            printf("ошибка в строке %d: %s", row_error, row);
        }
    }
    fclose(source);
    print(temperature_information, num_row);
    // printf("Введите номер месяца:\n");
    printf("Введите год:\n");
    // scanf("%d", &M_in);
    scanf("%d", &Y_in);
    float mean_temp_M = AverageMonthlyTemperature(temperature_information, num_row, M_in);
    // int min_temp_M = MinimumTemperatureInAMonth(temperature_information, num_row, M_in);
    // int max_temp_M = MaximumTemperatureInAMonth(temperature_information, num_row, M_in);
    float mean_temp_Y = AverageAnnualTemperature(temperature_information, num_row, Y);
    // int min_temp_Y = MinimumTemperatureForTheYear(temperature_information, num_row, Y);
    // int max_temp_Y = MaximumTemperatureForTheYear(temperature_information, num_row, Y);
    // printf("Средняя температура месяц %.1f", mean_temp_M);
    // printf("Минимальная температура месяц %d", min_temp_M);
    // printf("Максимальная температура месяц %d", max_temp_M);
    printf("Средняя температура за год %.1f", mean_temp_Y);
    // printf("Минимальная температура год %d", min_temp_Y);
    // printf("Максимальная температура год %d", max_temp_Y);
    return 0;
}