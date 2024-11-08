#include <stdio.h>

int isNumber(char t)
{
    if ((t>='0')&&(t<='9'))
        return 1;
    return 0;
}

int main(int argc, char **argv)
{
    int count = 0;
    char t = ' ';
    while (t!='.')
    {
        scanf("%c",&t);
        if (isNumber(t))
            count++;
    }
    printf("%d", count);
    return 0;
}