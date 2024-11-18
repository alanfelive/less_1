#include <stdio.h>
#include <stdlib.h>

void print_array (int size, char a[])
{
    for (int i = 0; i < size; i++)
        printf("%c", a[i]);
}

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i1 = 0, j, m, k, n = 1000;
    char c;
    char *s1 = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF) && (c != '\n'))
        s1[i1++] = c;
    for(j = 0; j < i1; j++)
    {
        for(k = j; k < i1; k++)
        {
            if (s1[k] == 'a')
            {
                s1[k] = 'b';
                break;
            }
            if (s1[k] == 'b')
            {
                s1[k] = 'a';
                break;
            }
            if (s1[k] == 'B')
            {
                s1[k] = 'A';
                break;
            }
            if (s1[k] == 'A')
            {
                s1[k] = 'B';
                break;
            }
        }
        fprintf(out, "%c", s1[j]);
    }
    fclose(in);
    fclose(out);
    return 0;
}