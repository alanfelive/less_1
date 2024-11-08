#include <stdio.h>

int power(int n, int p)
{
    int i;
    int result = 1;
    for (i = 0; i < p; i++)
        result = result * n ;
    return result;
}

int main(int argc, char **argv)
{
    int n, p, r;
    scanf("%d%d", &n, &p);
    r = power(n, p);
    printf("%d", r);
    return 0;
}
