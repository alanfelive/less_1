#include <stdio.h>

int Num(int n)
{
    if(n/10)
    {
        int t = n % 10;
        Num (n /= 10);
        printf("%d ", t);
    }
    else
        printf("%d ", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n)
        Num(n);
    else
        printf("%d ", n);
    return 0;
}