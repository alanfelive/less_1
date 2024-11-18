#include <stdio.h>
#include <stdlib.h>

int sort_array(int size, char a[])
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

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i1 = 0, i2 = 0, j = 0, m, k, n = 110;
    char c;
    char *s1 = (char*)malloc(n * sizeof(char));
    char *s2 = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != ' '))
        s1[i1++] = c;
    while (((c = fgetc(in)) != EOF) && (c != '\n'))
        s2[i2++] = c;
    sort_array(i1, s1);
    while (j < i1)
    {
        if ((j == 0 || s1[j] != s1[j - 1]) && s1[j] != s1[j + 1])
        {
            for (m = 0; m < i2; m++)
            {
                if(s1[j] == s2[m])
                    k++;
            }
            if (k == 1)
                fprintf(out, "%c ", s1[j]);
            k = 0;
        }
        j++;
    }
    fclose(in);
    fclose(out);
    return 0;
}