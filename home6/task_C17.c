#include <stdio.h>

int sumNumber(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int productNum(int n)
{
    int p = 1;
    while (n > 0)
    {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    if (productNum(n) == sumNumber(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}