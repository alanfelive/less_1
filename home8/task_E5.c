#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

void arrayPositiveValues (int arr[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    printf("%d", sum);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayPositiveValues(arr, s);
    return 0;
}