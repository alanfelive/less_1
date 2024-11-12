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

int arrayNew (int arr[], int s)
{
    int k = 0;
    for (int i = 0; i < s; i++)
        if (!((arr[i] % 100) / 10))
            k++;
    int print_arr[k];
    k = 0;
    for (int i = 0; i < s; i++)
        if (!((arr[i] % 100) / 10))
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
    arrayNew(arr, s);
    return 0;
}