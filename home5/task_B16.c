#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 2 натуральных числа через пробел:\n"); // приглашение для ввода последовательности
    scanf("%d%d", &a, &b); // cчитывание чисел в переменые
    while (a != 0 && b != 0) // выполняем, пока одно из чисел не разделится нацело на другое
    {
        if(a > b) // выполняем деление большего числа на меньшее
            a %= b;
        else
            b %= a;
    }
    printf("%d",a + b); // вывод результата (по итогам цикла одно из чисел будет 0 поэтому результатом будет одно из ненулевых чисел)
    return 0;
}
