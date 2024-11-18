#include <stdio.h>

int main() 
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int  i = 0, n, k = 2;
    fscanf(in, "%d", &n);
    while(i < n / 2)
    {
        if (!(i % 4))
            k = 2;
        fprintf(out, "%c%c", 65 + i, 48 + k);
        i++;
        k += 2;
    }
    fclose(in);
    fclose(out);
    return 0;
}