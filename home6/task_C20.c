#include <stdio.h>

int bracket(char t)
{
    if (t =='(')
        return 1;
    if (t ==')')
        return -1;
    return 0;
}

int main(int argc, char **argv)
{
    int sum = 0;
    char t = ' ';
    int flag = 0;
    do
    {
        scanf("%c",&t);
        sum += bracket(t);
        flag--;
    } while((flag != bracket(t))&& t!='.');
    if (!sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}