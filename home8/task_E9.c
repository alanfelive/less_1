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

int arrayMove (int arr[], int s)
{
    int print_arr[s];
    print_arr[0] = arr[s-1];
    for (int i = 1; i < s; i++)
        print_arr[i] = arr[i - 1];
    arrayPrint(print_arr, s);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayMove(arr, s);
    return 0;
}