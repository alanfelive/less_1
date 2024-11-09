#include <stdio.h>

int reverseNumber(int n)
{
    printf("%d ", n);
    if(n > 1)
        reverseNumber(n-1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    reverseNumber(n);
    return 0;
}