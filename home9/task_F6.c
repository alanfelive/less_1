#include <stdio.h>
#include <stdlib.h>

void input_array (int size, int a[])
{
    for (int i = 1; i < size; i++)
        scanf("%d", &a[i]);
}

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i !=j && a[j] == a[i])
                return 1;
    }
    return 0;
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int *a;
    a = (int*)malloc(size * sizeof(int));
    a[0] = size;
    input_array (size, a);
    printf("%d", is_two_same(size, a));
    return 0;
}