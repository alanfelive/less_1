#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arrayOneNum (int arr[], int s)
{
    int k = 0;
    int r = 0;
    for (int i = 0; i < s; i++)
    {
        r = 1;
        for (int j = 0; j < s; j++)
        {
            if (j != i && arr[j] == arr[i])
                r = 0;
        }
        if (r == 1)
            printf("%d ", arr[i]);
    }
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arrayOneNum(arr, s);
    return 0;
}