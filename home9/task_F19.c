#include <stdio.h>
#include <stdlib.h>

void input_2d_array (int row, int col, int a2d[])
{
    for (int i = 0; i < row * col; i++)
        scanf("%d", &a2d[i]);
}

int mean_main_diagonal (int row, int col, int a2d[])
{
    int sum = 0;
    for (int i = 0; i < row * col; i += col + 1)
        sum += a2d[i];
    return sum / row;
}

int number_elements (int row, int col, int a2d[])
{
    int k = 0;
    int mean = mean_main_diagonal (row, col, a2d);
    for (int i = 0; i < row * col; i ++)
        if (a2d[i] > mean)
            k++;
    return k;
}

int main(void)
{
    int row = 5, col = 5;
    int *a2d;
    a2d = (int*) malloc(row * col * sizeof(int));
    input_2d_array(row, col, a2d);
    printf("%d", number_elements(row, col, a2d));
    return 0;
}