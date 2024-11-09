#include <stdio.h>

int binNum(int n)
{
    if(n)
    {
        int t = n % 2;
        binNum (n /= 2);
        printf("%d", t);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n)
        binNum(n);
    else
        printf("%d", n);
    return 0;
}