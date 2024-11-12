#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arrayPrint (int new_arr[], int s)
{
    for (int i = 0; i < s; i++)
        printf("%d ", new_arr[i]);
}

void arrayPositive (int arr[], int s)
{
    int k = 0;
    for (int i = 0; i < s; i++)
        if (arr[i] > 0)
            k++;
    int print_arr[k];
    k = 0;
    for (int i = 0; i < s; i++)
        if (arr[i] > 0)
        {
            print_arr[k] = arr[i];
            k++;
        }
    arrayPrint(print_arr, k);
}

void arrayNegative (int arr[], int s)
{
    int k = 0;
    for (int i = 0; i < s; i++)
        if (arr[i] < 0)
            k++;
    int print_arr[k];
    k = 0;
    for (int i = 0; i < s; i++)
        if (arr[i] < 0)
        {
            print_arr[k] = arr[i];
            k++;
        }
    arrayPrint(print_arr, k);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayPositive(arr, s);
    arrayNegative(arr, s);
    return 0;
}