#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

int count_between(int from, int to, int size, int a[])
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (a[i] >= from && a[i] <= to)
            k++;
    return k;
}

int main(void)
{
    int from;
    scanf("%d", &from);
    int to;
    scanf("%d", &to);
    int size = 10;
    int a[size];
    input_array(size, a);
    printf("%d", count_between(from, to, size, a));
    return 0;
}