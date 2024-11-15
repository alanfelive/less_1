#include <stdio.h>
#include <stdlib.h>

void input_array (int size, int a[])
{
    for (int i = 1; i < size; i++)
        scanf("%d", &a[i]);
}

void print_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}

void sort_array(int size, int a[])
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
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int *a;
    a = (int*)malloc(size * sizeof(int));
    a[0] = size;
    input_array (size, a);
    sort_array(size, a);
    print_array(size, a);
    return 0;
}