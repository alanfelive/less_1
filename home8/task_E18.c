#include <stdio.h>

int countDiv (int n, int to_d)
{
    int arr[to_d];
    for (int i = 2; i <= to_d; i++)
    {
        arr[i] = 0;
        for (int j = 2; j <= n; j++)
        {
            if (!(j % i))
                arr[i]++;
        }
    }
    for (int k = 2; k <= to_d; k++)
    {
        printf("%d %d\n", k, arr[k]);
    }
    
}

int main(void)
{
    int n;
    int to_d = 9;
    scanf("%d", &n);
    countDiv(n, to_d);
    return 0;
}