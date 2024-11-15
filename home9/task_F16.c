#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

int black_in_white(char s[])
{
    if (((int)s[0] + (int)s[1]) % 2)
        return 0;
    return 1;
}

int main(void)
{
    int i = 0;
    char s[2], c;
    while ((c=getchar())!='\n')
        s[i++]=c;
    if (black_in_white(s))
        printf("BLACK");
    else
        printf("WHITE");
    return 0;
}