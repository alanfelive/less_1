#include <stdio.h>
#include <stdlib.h>

int input_array (int N, int a[])
{
    int size = 0;
    scanf("%d", &a[size]);
    while ((a[size]) != 0)
    {
        size++;
        scanf("%d", &a[size]);
    }
    return size;
}

void print_array (int size, int b[])
{
    for (int i = 0; i < size; i++)
        printf("%d ", b[i]);
}

void swap_negmax_last(int size, int a[])
{
    int tmp;
    int index_n_max = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[index_n_max] > a[i])
                index_n_max = i;
    }
    if (a[index_n_max] < 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] < 0)
                if (a[index_n_max] < a[i])
                        index_n_max = i;
        }
        {
            tmp = a[size - 1];
            a[size - 1] = a[index_n_max];
            a[index_n_max] = tmp;
        }
    }
}

int main(void)
{
    int N = 1000;
    int *a;
    a = (int*)malloc(N * sizeof(int));
    int size = input_array(N, a);
    swap_negmax_last(size, a);
    print_array(size, a);
    return 0;
}