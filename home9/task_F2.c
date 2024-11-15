#include <stdio.h>
#include <stdlib.h>

void input_array (int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void print_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}

void sort_even_odd(int n, int a[])
{
    int i;
    int j = 0;
    int tmp[n];
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tmp[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            tmp[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < n; i++)
        a[i] = tmp[i];
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int *a;
    a = (int*)malloc(size * sizeof(int));
    input_array (size, a);
    sort_even_odd(size, a);
    print_array(size, a);
    return 0;
}