#include <stdio.h>

int printNum(int n)
{
    if (n / 10)
        printNum(n / 10);
    printf("%d ", n % 10);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printNum(n);
    return 0;
}