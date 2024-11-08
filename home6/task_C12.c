#include <stdio.h>

float degree(float n, int p)
{
    int i;
    float result = 1;
    for (i = 0; i < p; i++)
        result = result * n ;
    return result;
}

unsigned long long factorial(int n)
{
    int i;
    unsigned long long r = 1;
    for (i = 1; i <= n; i++)
        r *= i;
    return r;
}

float convertRad(int g)
{
    return ((float) g / 180 * 3.14159);
}

float sinus(float x)
{
    float result = x - degree(x, 3)/(factorial(3)) + degree(x, 5)/(factorial(5)) - degree(x, 7)/(factorial(7));
    return result; 
}

int main(int argc, char **argv)
{
    int g;
    scanf("%d", &g);
    printf("%.3f ", sinus(convertRad(g)));
    return 0;
}