#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

void arrayPrint (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arrayMaximumValue (int arr[], int s)
{
    int index = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[index] < arr[i])
            index = i;
    }
    printf("%d %d ", index + 1, arr[index]);
}

int arrayMinimumValue (int arr[], int s)
{
    int index = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[index] > arr[i])
            index = i;
    }
    printf("%d %d", index + 1, arr[index]);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayMaximumValue(arr, s);
    arrayMinimumValue(arr, s);
    return 0;
}