#include <stdio.h>

int covertMaxNum (int n)
{
    int k = 0;
    int n_copy = n;
    while (n_copy)
    {
        k ++;
        n_copy /= 10;
    }
    int arr[k];
    for (int i = k - 1; i >=0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    covertMaxNum(n);
    return 0;
}