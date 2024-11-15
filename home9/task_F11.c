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

void minimum_array_elements(int N, int a[])
{
    int maximum;
    int index_maximum;
    int index_minimum;
    int post_index_minimum;
    index_minimum = minimum_array_element(N, a);
    index_maximum = maximum_array_element(N, a);
    maximum = a[index_maximum];
    a[index_minimum] = maximum;
    post_index_minimum = minimum_array_element(N, a);
    if (index_minimum < post_index_minimum)
        printf("%d %d", index_minimum, post_index_minimum);
    else
        printf("%d %d", post_index_minimum, index_minimum);
}

int main(void)
{
    int N = 30;
    int a[N];
    input_array(N, a);
    minimum_array_elements(N, a);
    return 0;
}