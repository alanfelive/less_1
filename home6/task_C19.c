#include <stdio.h>

int isNumber(char t)
{
    if ((t>='0')&&(t<='9'))
        return (t - '0');
    return 0;
}

int main(int argc, char **argv)
{
    int sum = 0;
    char t = ' ';
    while (t!='.')
    {
        scanf("%c",&t);
        if (isNumber(t))
            sum += isNumber(t);
    }
    printf("%d", sum);
    return 0;
}