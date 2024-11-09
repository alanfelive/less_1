#include <stdio.h>

int printingPrimeFactors(int n, int d)
{
    if(n == 1)
        return 0;
    if(d < n)
    {
        if (!(n % d))
        {
            printf("%d ", d);
            n /= d;
        }
        else
            d++;
        printingPrimeFactors(n, d);
    }
    else
        printf("%d", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printingPrimeFactors(n, 2);
    return 0;
}