#include <stdio.h>

int result = 1;

int PowerNum(int n, int p)
{
    if (!p)
        return result;
    else
        result *= n;
    return PowerNum(n, p - 1);
}

int main(void)
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", PowerNum(n, p));
    return 0;
}