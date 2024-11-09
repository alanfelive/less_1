#include <stdio.h>

int interval(int x1, int x2)
{
    printf("%d ", x1);
    if(x2 > x1)
        interval(x1 + 1, x2);
    if(x2 < x1)
        interval(x1 - 1, x2);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    interval(a, b);
    return 0;
}