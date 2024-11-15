#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

int sum_between_ab(int from, int to, int size, int a[])
{
    int f;
    int t;
    if (from > to)
    {
        f = to;
        t = from;
    }
    else
    {
        f = from;
        t = to;
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (a[i] >= f && a[i] <= t)
            sum += a[i];
    return sum;
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
    printf("%d", sum_between_ab(from, to, size, a));
    return 0;
}