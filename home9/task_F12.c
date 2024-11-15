#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

void print_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
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

int minimum_array_element (int N, int a[])
{
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[index] > a[i])
            index = i;
    }
    return index;
}

void change_max_min(int size, int a[])
{
    int tmp;
    int index_maximum;
    int index_minimum;
    index_minimum = minimum_array_element(size, a);
    index_maximum = maximum_array_element(size, a);
    tmp = a[index_minimum];
    a[index_minimum] = a[index_maximum];
    a[index_maximum] = tmp;
}

int main(void)
{
    int size = 10;
    int a[size];
    input_array(size, a);
    change_max_min(size, a);
    print_array(size, a);
    return 0;
}