#include <stdio.h>

int Num(int n)
{
    scanf("%d",&n);
    if(!n)
        return 0;
    if(n % 2)
        printf("%d ", n);
    Num(n);
}

int main(void)
{
    int n = 0;
    Num(n);
    return 0;
}