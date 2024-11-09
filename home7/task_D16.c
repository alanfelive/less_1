#include <stdio.h>

int isPowerOfTwo(int n)
{
    if (n <= 2)
    {
        printf("YES");
        return 0;
    }
    if (n % 2)
    {
        printf("NO");
        return 0;
    }
    isPowerOfTwo(n / 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    isPowerOfTwo(n);
    return 0;
}