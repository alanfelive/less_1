#include <stdio.h>

int listNum(int n)
{
    if(n > 1)
        listNum(n-1);
    printf("%d ", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    listNum(n);
    return 0;
}