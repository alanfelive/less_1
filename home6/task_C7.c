#include <stdio.h>

int ss_convert (int n, int p)
{
    int r = 0;
    int k = 1;
    while (n)
    {
        r += (n % p) * k;
        k *= 10;
        n /= p;
    }
    return r;
}

int main(int argc, char **argv)
{
    int n;
    int p;
    scanf("%d%d", &n, &p);
    printf("%d", ss_convert(n, p));
    return 0;
}