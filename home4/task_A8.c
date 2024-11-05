#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b, c, maxi; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 3 числа через пробел:\n"); // приглашение для ввода чисел
    scanf("%d%d%d", &a, &b, &c); // cчитывание чисел в переменные
    if (a>b && a>c) // сравнение введенных чисел
        maxi = a; // a является максимальным
    else if (c>b && a<c)
        maxi = c; // с является максимальным
    else
        maxi = b; // b является максимальным
    printf("%d", maxi); // выводим максимальное число
    return 0; // успешное завершение
}