#include <stdio.h>

int isPrime(int n, int d)
{
    if(n > 3 && d != 1)
    {
        if (!(n % d))
            return 0;
        isPrime(n, d - 1);
    }
    else if (!d)
        return 0;
    else
        return 1;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (isPrime(n, n - 1))
        printf("YES");
    else
        printf("NO");
    return 0;
}