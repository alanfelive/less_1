#include <stdio.h>

int reverseNum(int n)
{
    if(n)
    {
        printf("%d ", n % 10);
        reverseNum (n /= 10);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n)
        reverseNum(n);
    else
        printf("%d ", n);
    return 0;
}