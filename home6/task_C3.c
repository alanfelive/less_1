#include <stdio.h>

int middle(int a, int b)
{
    int result;
    result = (a + b) / 2 ;
    return result;
}

int main(int argc, char **argv)
{
    int a, b, r;
    scanf("%d%d", &a, &b);
    r = middle(a, b);
    printf("%d", r);
    return 0;
}
