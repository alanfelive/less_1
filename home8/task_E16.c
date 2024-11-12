#include <stdio.h>

void arrayInput (int arr[], int s)
{
    for (int i=0; i < s; i++)
        scanf("%d", &arr[i]);
}

int arraySort (int arr[], int s)
{
    int temp;
    int flag;
    for (int i = s - 1; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}

int arrayPopularNum (int arr[], int s)
{
    int index_maxi_popular = 0;
    int maxi_popular = 0;
    int popular = 1;
    for (int i = 1; i < s; i++)
    {
        if (arr[i - 1] == arr[i])
            popular++;
        else
            popular = 0;
        if (popular > maxi_popular)
        {
            maxi_popular = popular;
            index_maxi_popular = i - 1;
        }
    }
    printf("%d ", arr[index_maxi_popular]);
}

int main(void)
{
    int s = 10;
    int arr[s];
    arrayInput(arr, s);
    arraySort(arr, s);
    arrayPopularNum(arr, s);
    return 0;
}