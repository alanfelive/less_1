#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arrayMinimumValue (int arr[], int s)
{
    int min_value = arr[0];
    for (int i = 0; i < s; i++)
        if (min_value > arr[i])
            min_value = arr[i];
    return min_value;
}

int main(void)
{
    int s = 5;
    int arr[s];
    arrayInput(arr, s);
    printf("%d", arrayMinimumValue(arr, s));
    return 0;
}