#include <stdio.h>

int k = 1;

int printSequenceOfNumbers(int n, int k)
{
    if (n)
    {
        for(int i = 0; i < k; i++)
        {
            printf("%d ", k);
            n--;
            if (!n)
                break;
        }
        printSequenceOfNumbers(n, k+1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printSequenceOfNumbers(n, k);
    return 0;
}