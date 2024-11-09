#include <stdio.h>

int Akkerman(int m, int n)
{
    int result;
    if (m == 0)
        result = n + 1;
    if (m > 0 && n == 0)
        result = Akkerman(m - 1, 1);
    if (m > 0 && n > 0)
        result = Akkerman(m - 1, Akkerman(m, n - 1));
    return result;
}

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", Akkerman(m, n));
    return 0;
}