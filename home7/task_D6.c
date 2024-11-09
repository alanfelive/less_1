#include <stdio.h>

int reverseText()
{
    char t = ' ';
    if ((t = getchar()) != '.')
        reverseText();
    if (t != '.')
        putchar(t);
}

int main(void)
{
    reverseText();
    return 0;
}