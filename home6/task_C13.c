#include <stdio.h>

const float pi=3.14159;

float degree(float n, int p)
{
    float result = 1;
    for (int i = 0; i < p; i++)
        result *= n ;
    return result;
}

unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

float convertRad(int g)
{
    return ((float) g / 180 * pi);
}

float cosinus(float x)
{
    float result = 0;
    for (int i = 0; i < 4; i++)
        result += degree(-1, i) * degree(x, 2 * i) / (factorial(2 * i));
    return result; 
}

int main(int argc, char **argv)
{
    int g;
    scanf("%d", &g);
    printf("%.3f ", cosinus(convertRad(g)));
    return 0;
}