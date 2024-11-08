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

int isEvenNum(int n)
{
    if (sumNumber(n) % 2)
        return 0;
    return 1;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    if (isEvenNum(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}