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

int arrayMove (int arr[], int s, int p)
{
    int print_arr[s];
    print_arr[0] = arr[s-p];
    for (int i = 0; i < s; i++)
        if ((p - i) > 0)
            print_arr[i] = arr[s - (p - i)];
        else
            print_arr[i] = arr[i - p];
    arrayPrint(print_arr, s);
}

int main(void)
{
    int s = 12;
    int p = 4;
    int arr[s];
    arrayInput(arr, s);
    arrayMove(arr, s, p);
    return 0;
}