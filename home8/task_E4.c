#include <stdio.h>

void arrayInput (int arr[], int s)
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

    return index;
}

int arrayMinimumValue (int arr[], int s)
{
    int index = 0;

    for (int i = 0; i < s; i++)
    {
        if (arr[index] > arr[i])
            index = i;
    }

    return index;
}

int arraySummaryMaximum (int arr[], int s)
{
    int maximum;
    int index_maximum;
    int post_index_maximum;
    int minimum;
    int index_minimum;

    index_maximum = arrayMaximumValue(arr, s);
    maximum = arr[index_maximum];
    index_minimum = arrayMinimumValue(arr, s);
    minimum = arr[index_minimum];
    arr[index_maximum] = minimum;
    post_index_maximum = arrayMaximumValue(arr, s);
    printf("%d", arr[post_index_maximum] + maximum);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arraySummaryMaximum(arr, s);
    return 0;
}