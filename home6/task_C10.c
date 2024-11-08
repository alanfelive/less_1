#include <stdio.h>

int isDiv(int i, int n)
{
    if(n % i)
        return 0;
    return 1;
}

int main(int argc, char **argv)
{
    int n;
    int i = 2;
    scanf("%d", &n);
    while (i <= n)
    {
        if(isDiv(i, n))
        {
            printf("%d ", i);
            n /= i;
        }
        else
            i++;
    }
    return 0;
}