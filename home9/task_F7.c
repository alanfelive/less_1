// не проходит тестирование на стенде, на ПК все отлично
#include <stdio.h>
#include <stdlib.h>

void input_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

void print_array (int size, int b[])
{
    for (int i = 0; i < size; i++)
        printf("%d ", b[i]);
}

int compression(int a[], int b[], int N)
{
    int i = 0;
    int l = 0;
    int k;
    while (i < N)
    {
        k = 0;
        while (a[i] == a[i + k])
            k++;
        if (!i && a[i])
        {
            b[0] = 0;
            l = 1;
        }
        b[l] = k;
        i += k;
        l++;
    }
    return l;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int *a;
    int *b;
    a = (int*)malloc(N * sizeof(int));
    b = (int*)malloc(N * sizeof(int));
    input_array(N, a);
    int size = compression(a, b, N);
    print_array(size, b);
    return 0;
}