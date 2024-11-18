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
    int  i1 = 0, n = 1000;
    char c;
    char *s1 = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF) && (c != '\n'))
    {
        if (!(c >= '0' && c <= '9'))
            c = "0";
        s1[i1++] = c;
    }
    print_array(i1, s1);
    // fprintf(out, "%d %d", k, K);
    fclose(in);
    fclose(out);
    return 0;
}