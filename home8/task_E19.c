#include <stdio.h>

void arrayPrint (int print_arr[], int s)
{
    for (int i=0; i < s; i++)
        printf("%d ", print_arr[i]);
}

int numToArray (int n)
{
    int k = 0;
    int n_copy = n;
    while (n_copy)
    {
        k++;
        n_copy /= 10;
    }
    int print_arr[k];
    for (int i = k - 1; i >=0; i--)
    {
        print_arr[i] = n % 10;
        n /= 10;
    }
    arrayPrint(print_arr, k);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    numToArray(n);
    return 0;
}