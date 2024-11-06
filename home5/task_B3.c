#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    int i, n1, n2, q, sum = 0; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    scanf("%d%d", &n1, &n2); // cчитывание чисел в переменные
    for (i = n1; i <= n2; i++) // переборка значений от n1 до n2 включительно
    {
        q = pow(i, 2); // возведение в квадрат
        sum += q;
    }
    printf("%d\n", sum); // печать результата
    return 0; // успешное завершение
}