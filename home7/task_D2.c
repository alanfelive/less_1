#include <stdio.h>

int sumListNum(int n)
{
    int sum = 0;
    if(!n)
        return sum;
    return sum = sumListNum(n-1) + n;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sumListNum(n));
    return 0;
}