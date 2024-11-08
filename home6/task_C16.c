#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    if (n > 1 && isPrime(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}