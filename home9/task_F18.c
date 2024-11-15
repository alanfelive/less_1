#include <stdio.h>
#include <stdlib.h>

void input_2d_array (int row, int col, int a2d[])
{
    for (int i = 0; i < row * col; i++)
        scanf("%d", &a2d[i]);
}

int sum_max_2d (int row, int col, int a2d[])
{
    int sum = 0;
    int maxi;
    for (int i = 0; i < row; i ++)
    {
        maxi = a2d[i * row];
        for (int j = i * row; j < i * row + col; j++)
        {
            if (maxi < a2d[j])
                maxi = a2d[j];
        }
        sum += maxi;
    }
    return sum;
}

int main(void)
{
    int row = 10, col = 10;
    int *a2d;
    a2d = (int*) malloc(row * col * sizeof(int));
    input_2d_array(row, col, a2d);
    printf("%d", sum_max_2d(row, col, a2d));
    return 0;
}