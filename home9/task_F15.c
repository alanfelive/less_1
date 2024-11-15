#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

int maximum_array_element (int N, int a[])
{
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[index] < a[i])
            index = i;
    }
    return index;
}

int count_bigger_abs(int n, int a[])
{
    int k = 0;
    int index_maximum;
    index_maximum = maximum_array_element(n, a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            if (a[index_maximum] < (-1) * a[i])
                    k++;
    }
    return k;
}

int main(void)
{
    int n = 10;
    int a[n];
    input_array(n, a);
    printf("%d", sum_between_ab(n, a));
    return 0;
}