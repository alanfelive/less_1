#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i = 0, j, k = 0, n = 1000;
    char c;
    char *s = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF) && (c != '\n'))
    {
        s[i++] = c;
    }
    for (j = 0; j < i - 1; j++)
    {
        if(s[j] == s[i - 1])
            fprintf(out, "%d ", j);
    }
    fclose(in);
    fclose(out);
    return 0;
}