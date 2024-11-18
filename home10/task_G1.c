#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i = 0, j = 0, k = 0, n = 100;
    char c;
    char *s = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF) && (c != '\n'))
        s[i++] = c;
    for (j = 0; j < 3; j++)
    {
        for (k = 0; k < i; k++)
            fprintf(out, "%c", s[k]);
        if(j < 2)
            fprintf(out, ", ");
    }
    fprintf(out, " %d", i);
    fclose(in);
    fclose(out);
    return 0;
}