#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

void arrayPrint (int print_arr[], int s)
{
    for (int i=0; i < s; i++)
        printf("%d ", print_arr[i]);
}

int arrayInvers (int arr[], int s, int d)
{
    int k = s / d;
    int print_arr[k];
    for (int i = 0; i < d; i++)
    {
        for (int j = i * (s / d); j < (i + 1) * (s / d); j++)
        {
            print_arr[(i + 1) * k - (j + 1)] = arr[j];
        }
        arrayPrint(print_arr, k);
    }
}

int main(void)
{
    int s = 12;
    int arr[s];
    int d = 3; // на сколько частей разделить массив
    arrayInput(arr, s);
    arrayInvers(arr, s, d);
    return 0;
}