#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

void arrayMean (int arr[], int s)
{
    float sum = 0;
    for (int i = 0; i < s; i++)
        sum += arr[i];
    printf("%.2f", sum / s);
}

int main(void)
{
    int s = 12;
    int arr[s];
    arrayInput(arr, s);
    arrayMean(arr, s);
    return 0;
}