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

int sort_array(int size, int a[])
{
    int tmp;
    int flag;
    for (int i = size - 1; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j + 1] < a[j])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag)
            break;
    }
    return a[0];
}

int lost(int size, int a[])
{
    int min = sort_array(size, a);
    for (int i = 0; i < size; i++)
    {
        if (a[i] + 1 != a[i + 1])
            return min + i + 1;
    }
    return 0;
}

int main(void)
{
    int N = 1000;
    int *a;
    a = (int*)malloc(N * sizeof(int));
    int size = input_array(N, a);
    printf("%d", lost(size, a));
    return 0;
}