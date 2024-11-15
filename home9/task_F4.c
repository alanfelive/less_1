#include <stdio.h>

void print_digit(char s[])
{
    int i;
    int j;
    int k;
    int c = s[0];
    int len = 0;
    while(c!='\0')
    {
        len++;
        c = s[len];
    }
    for (i = 0; i < 10; i++)
    {
        k = 0;
        for (j = 0; j < len; j++)
             if (i + 48 == (int)s[j])
                k++;
        if (k)
            printf("%d %d\n", i, k);
    }
}

int main(void)
{
    char s[100],c;
    int i = 0;
    while ((c=getchar())!='\n')
        s[i++]=c;
    s[i]='\0';
    print_digit (s);
    return 0;
}