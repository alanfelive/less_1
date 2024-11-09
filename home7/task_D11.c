#include <stdio.h>

long long int result_ss = 0; // результат перевода в СС
int sum_digit = 0; // сумма цифр
int p = 2; // СС
long long int k_ss = 1; // вспомогательный коэффициент использзуемый для перевода в СС

long long int ssConvert(int n, int p)
{
    if(n && p)
    {
        result_ss += (n % p) * k_ss;
        k_ss *= 10;
        ssConvert (n /= p, p);
    }
    return result_ss;
}

int sumDigit(long long int n)
{
    if(n)
        sumDigit(n / 10);
    return sum_digit += n % 10;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n)
        printf("%llu", sumDigit(ssConvert(n, p)));
    else
        printf("0");
    return 0;
}