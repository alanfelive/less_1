#include <stdio.h>
#include <stdlib.h>

int is_palindrom(int N, char str[])
{
    for(int i = 0; i < N / 2; i++)
    {
        if (str[i] != str[N - 1 - i])
            return 0;
    }
    return 1;
}

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i1 = 0, n = 1000;
    char c;
    char *s1 = (char*)malloc(n * sizeof(char));
    while (((c = fgetc(in)) != EOF))
        s1[i1++] = c;
    if (is_palindrom(i1, s1))
        fprintf(out, "YES");
    else
        fprintf(out, "N0");
    fclose(in);
    fclose(out);
    return 0;
}