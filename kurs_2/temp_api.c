#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"

void AddRecord(struct sensor *temperature_information, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temp)
{
    temperature_information[number].year = year;
    temperature_information[number].month = month;
    temperature_information[number].day = day;
    temperature_information[number].hour = hour;
    temperature_information[number].minute = minute;
    temperature_information[number].temp = temp;
}

void print(struct sensor *temperature_information, int number)
{
    printf("========================\n");
    for (int i = 0; i < number; i++)
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
                temperature_information[i].year,
                temperature_information[i].month,
                temperature_information[i].day,
                temperature_information[i].hour,
                temperature_information[i].minute,
                temperature_information[i].temp);
}

float AverageMonthlyTemperature(struct sensor *temperature_information, int N, int Y, int M)
{
    float sum_temp = 0;
    int counter = 0;
    for (int i = 0; i < N; i++)
        if (temperature_information[i].year == Y && temperature_information[i].month == M)
        {
            sum_temp += temperature_information[i].temp;
            counter++;
        }
    if (!counter)
        return 1000;
    return sum_temp / counter;
}

float MinimumTemperatureInAMonth(struct sensor *temperature_information, int N, int Y, int M)
{
    int min_temp = 1000;
    for (int i = 1; i < N; i++)
        if (temperature_information[i].year == Y && temperature_information[i].month == M && min_temp > temperature_information[i].temp)
            min_temp = temperature_information[i].temp;
    return min_temp;
}

float MaximumTemperatureInAMonth(struct sensor *temperature_information, int N, int Y, int M)
{
    int max_temp = -1000;
    for (int i = 1; i < N; i++)
        if (temperature_information[i].year == Y && temperature_information[i].month == M && max_temp < temperature_information[i].temp)
            max_temp = temperature_information[i].temp;
    return max_temp;
}

float AverageAnnualTemperature(struct sensor *temperature_information, int N, int Y)
{
    float sum_temp = 0;
    int counter = 0;
    for (int i = 0; i < N; i++)
        if (temperature_information[i].year == Y)
        {
            sum_temp += temperature_information[i].temp;
            counter++;
        }
    if (!counter)
        return 1000;
    return sum_temp / counter;
}

float MinimumTemperatureForTheYear(struct sensor *temperature_information, int N, int Y)
{
    int min_temp = 1000;
    for (int i = 1; i < N; i++)
        if (temperature_information[i].year == Y && min_temp > temperature_information[i].temp)
            min_temp = temperature_information[i].temp;
    return min_temp;
}

float MaximumTemperatureForTheYear(struct sensor *temperature_information, int N, int Y)
{
    int max_temp = -1000;
    for (int i = 1; i < N; i++)
        if (temperature_information[i].year == Y && max_temp < temperature_information[i].temp)
            max_temp = temperature_information[i].temp;
    return max_temp;
}