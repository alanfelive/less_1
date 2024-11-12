#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i = 0; i < s; i++)
        scanf("%d", &arr[i]);
}

float arrayMean (int arr[], int s)
{
    float sum = 0;
    for (int i = 0; i < s; i++)
        sum += arr[i];
    return sum / s;
}

int main(void)
{
    int s = 5;
    int arr[s];
    arrayInput(arr, s);
    printf("%.3f", arrayMean(arr, s));
    return 0;
}