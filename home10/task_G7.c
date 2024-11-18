#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i1 = 0, k = 0, K = 0, n = 10000;
    char c;
    char *s1 = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF))
        s1[i1++] = c;
    for(int i = 0; i < i1; i++)
    {
        if ((s1[i] >= 'a') && (s1[i] <= 'z'))
            k++;
        if ((s1[i] >= 'A') && (s1[i] <= 'Z'))
            K++;
    }
    fprintf(out, "%d %d", k, K);
    fclose(in);
    fclose(out);
    return 0;
}