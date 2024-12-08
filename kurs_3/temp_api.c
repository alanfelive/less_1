#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"

float AverageMonthlyTemperature(struct sensor *temp_info, long int N, int M, int Y)
{
    float sum_temp = 0;
    int counter = 0;
    for (int i = 0; i < N; i++)
        if (temp_info[i].year == Y && temp_info[i].month == M)
        {
            sum_temp += temp_info[i].temp;
            counter++;
        }
    if (!counter)
        return 1000;
    // return sum_temp / counter;
    return counter;
}

float MinimumTemperatureInAMonth(struct sensor *temp_info, int N, int M, int Y)
{
    int min_temp = 1000;
    for (int i = 1; i < N; i++)
        if (temp_info[i].year == Y && temp_info[i].month == M && min_temp > temp_info[i].temp)
            min_temp = temp_info[i].temp;
    return min_temp;
}

float MaximumTemperatureInAMonth(struct sensor *temp_info, int N, int M, int Y)
{
    int max_temp = -1000;
    for (int i = 1; i < N; i++)
        if (temp_info[i].year == Y && temp_info[i].month == M && max_temp < temp_info[i].temp)
            max_temp = temp_info[i].temp;
    return max_temp;
}

float AverageAnnualTemperature(struct sensor *temp_info, int N, int Y)
{
    float sum_temp = 0;
    int counter = 0;
    for (int i = 0; i < N; i++)
        if (temp_info[i].year == Y)
        {
            sum_temp += temp_info[i].temp;
            counter++;
        }
    if (!counter)
        return 1000;
    return sum_temp / counter;
}

float MinimumTemperatureForTheYear(struct sensor *temp_info, int N, int Y)
{
    int min_temp = 1000;
    for (int i = 1; i < N; i++)
        if (temp_info[i].year == Y && min_temp > temp_info[i].temp)
            min_temp = temp_info[i].temp;
    return min_temp;
}

float MaximumTemperatureForTheYear(struct sensor *temp_info, int N, int Y)
{
    int max_temp = -1000;
    for (int i = 1; i < N; i++)
        if (temp_info[i].year == Y && max_temp < temp_info[i].temp)
            max_temp = temp_info[i].temp;
    return max_temp;
}