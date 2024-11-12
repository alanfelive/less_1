#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arrayInvers (int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if(i < s/2)
            printf("%d ", arr[s/2-i-1]);
        if(i >= s/2)
            printf("%d ", arr[s/2+s-i-1]);
    }
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayInvers(arr, s);
    return 0;
}