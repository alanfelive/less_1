#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b, c; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите длины всех трех сторон треугольника:\n"); // приглашение для ввода величин сторон
    scanf("%d%d%d", &a, &b, &c); // cчитывание чисел в переменные
    if ((a + b > c) && ( b + c > a) && ( a + c > b))
        printf("YES"); // такой треугольник существует
    else
        printf("NO"); // такого треугольника не может существать
    return 0; // успешное завершение
}