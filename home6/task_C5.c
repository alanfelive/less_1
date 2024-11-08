#include <stdio.h>

int result (int x)
{
    int y;
    y = (1 + x) * x / 2;
    return y;
}

int main(int argc, char **argv)
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    sum += result(n);
    printf("%d", sum);
    return 0;
}