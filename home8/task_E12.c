#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arraySort (int arr[], int s)
{
    int temp;
    int flag;
    for (int i = s / 2 - 1; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j + 1] < arr[j])
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
    for (int i = s - 1; i >= s / 2; i--)
    {
        flag = 1;
        for (int j = s / 2; j < i; j++)
        {
            if (arr[j + 1] > arr[j])
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
    for (int i = 0; i < s; i++)
        printf("%d ", arr[i]);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arraySort(arr, s);
    return 0;
}