#include <stdio.h>

void printing_numbers (char num[], int size)
{
    int i;
    int j;
    int k;
    for (i = 0; i < 10; i++)
    {
        k = 0;
        for (j = 0; j < size; j++)
             if (i + 48 == (int)num[j])
                k++;
        if (k)
            printf("%d %d\n", i, k);
    }
}

int main(void)
{
    char num[1000],c;
    int size=0;
    while ((c=getchar())!='\n')
        num[size++]=c;
    num[size]='\0';
    printing_numbers (num, size);
    return 0;
}