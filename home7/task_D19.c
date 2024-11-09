#include <stdio.h>

int k = 0;

int numberSymbols(void)
{
    char t;
    scanf("%c", &t);
    if (t == '.')
        return k;
    if (t == 'a')
        k++;
    return numberSymbols();
}

int main(void)
{
    printf("%d", numberSymbols());
    return 0;
}