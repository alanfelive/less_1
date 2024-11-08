#include <stdio.h>

int result (int x)
{
    int y;
    if (x < -2)
        y = 4;
    else if (x >=2)
        y = x * x + 4 * x + 5;
    else
        y = x * x;
    return y;
}

int main(int argc, char **argv)
{
    int n=1;
    int maxi=0;
    while (n!=0)
    {
        scanf("%d", &n);
        if (maxi < result(n))
            maxi = result(n);
    }
    printf("%d", maxi);
    return 0;
}