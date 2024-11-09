#include <stdio.h>

int sum = 0;

int sumDigit(int n)
{
    if(n)
        sumDigit(n / 10);
    return sum += n % 10;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sumDigit(n));
    return 0;
}