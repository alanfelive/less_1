#include <stdio.h>
#include <stdlib.h>

void input_array (int N, int a[])
{
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
}

void print_array (int N, int a[])
{
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
}

int number_multiples (int r, int d, int N, int a[])
{
    int k = 0;
    for (int i = 0; i < N; i++)
        if (a[i] % d == r)
            k++;
    return k;
}

int product_numbers (int r, int d, int n)
{
    int p = 1;
    while (n)
    {
        if (n % d == r)
            p *= n % 10;
        n /= 10;
    }
    return p;
}

int transformation_array (int N, int a[])
{
    int even = number_multiples (0, 2, N, a);
    int odd = number_multiples (1, 2, N, a);
    if (even > odd)
        for (int i = 0; i < N; i ++)
        {
            if ((a[i] % 2))
                a[i] = product_numbers(1, 2, a[i]);
        }
    else
        for (int i = 0; i < N; i ++)
        {
            if (!(a[i] % 2))
                a[i] = product_numbers(0, 2, a[i]);
        }
}

int main(void)
{
    int N = 10;
    int *a;
    a = (int*) malloc(N * sizeof(int));
    input_array(N, a);
    transformation_array(N, a);
    print_array(N, a);
    return 0;
}