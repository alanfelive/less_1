#include <stdio.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

int sum_of_the_main_diagonal(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i += 6)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int n = 25;
    int a[n];
    input_array(n, a);
    printf("%d", sum_of_the_main_diagonal(n, a));
    return 0;
}