#include <stdio.h>

int growUp(int n)
{
    for (int i = 0; n != 0; i++, n /= 10)
    {
        if (n % 10 <= (n / 10) % 10)
            return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    if (growUp(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}