#include <stdio.h>

void text_compression(int len, char s[])
{
    int i = 0;
    int k = 0;
    while (i < len && s[i] != '.')
    {
        k = 0;
        while (s[i] == s[i + k])
            k++;
        printf("%c%d", s[i], k);
        i += k;
    }
}

int main(void)
{
    int len = 0;
    char s[1000], c;
    while ((c=getchar())!='\n')
        s[len++]=c;
    text_compression (len, s);
    return 0;
}