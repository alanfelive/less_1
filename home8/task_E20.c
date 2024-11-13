#include <stdio.h>
#include <stdlib.h>

void arrayPrint (int arr[], int s)
{
    for (int i=0; i < s; i++)
        printf("%d", arr[i]);
}

int arraySort(int arr[], int s)
{
    int temp;
    int flag;
    for (int i = s - 1; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
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
}

int numToArray (int arr[], int n, int k)
{
    for (int i = k - 1; i >=0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
}


int main(void)
{
    int n;
    int n_copy;
    int k = 0;
    scanf("%d", &n);
    n_copy = n;
    while (n_copy)
    {
        k++;
        n_copy /= 10;
    }
    int *arr;
    arr=(int*)malloc(k * sizeof(int));
    numToArray(arr, n, k);
    arraySort(arr, k);
    arrayPrint(arr, k);
    return 0;
}