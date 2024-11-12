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

int arraySort (int arr[], int s)
{
    int temp;
    int flag;
    for (int i = s - 1; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}

int arrayNew (int arr[], int s)
{
    int k = 0;
    int r = 0;
    for (int i = 1; i < s; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            r++;
            if (r < 2)
                k++;
        }
        else
            r = 0;
    }
    int print_arr[k];
    k = 0;
    r = 0;
    for (int i = 1; i < s; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            r++;
            if (r < 2)
            {
                print_arr[k] = arr[i];
                k++;
            }
        }
        else
            r = 0;
    }
    arrayPrint(print_arr, k);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arraySort(arr, s);
    arrayNew(arr, s);
    return 0;
}