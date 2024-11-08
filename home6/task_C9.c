#include <stdio.h>

unsigned long long factorial(int n)
{
    int i;
    unsigned long long r = 1;
    for (i = 1; i <= n; i++)
        r *= i;
    return r;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    printf("%llu", factorial(n));
    return 0;
}