#include <stdio.h>

char ups (char t)
{
    if (t >= 'a' && t <= 'z')
        t = t-0x20;
    return(t);
}

int main(int argc, char **argv)
{
    char t = ' ';
    while (t !='.')
    {
        scanf("%c", &t);
        if (t =='.')
            break;
        printf("%c", ups(t));
    }
    return 0;
}