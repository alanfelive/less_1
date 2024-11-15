#include <stdio.h>
#include <stdlib.h>

void input_array (int size, int a[])
{
    for (int i = 1; i < size; i++)
        scanf("%d", &a[i]);
}

int find_max_array(int size, int a[])
{
    int maximum = a[0];
    for (int i = 0; i < size; i++)
    {
        if (maximum < a[i])
            maximum = a[i];
    }
    return maximum;
}

int main(void)
{
    int size;
    scanf("%d", &size);
    int *a;
    a = (int*)malloc(size * sizeof(int));
    a[0] = size;
    input_array (size, a);
    printf("%d", find_max_array(size, a));
    return 0;
}