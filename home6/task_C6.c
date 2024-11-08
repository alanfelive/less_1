#include <stdio.h>

unsigned long long power(int n, int p)
{
    int i;
    unsigned long long r = 1;
    for (i = 0; i < p; i++)
        r *= n ;
    return r;
}

unsigned long long result (int x)
{
    return power(2, x-1);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    printf("%llu", result(n));
    return 0;
}