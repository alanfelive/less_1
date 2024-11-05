#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b, c, sum; //объявление переменных
    setlocale(LC_ALL, ".utf-8"); //локализация
    printf("Введите 3 числа через пробел:\n"); //приглашение для ввода чисел
    scanf("%d%d%d", &a, &b, &c); //cчитывание чисел в переменные
    sum = a + b + c; //сложение чисел
    printf("%d+%d+%d=%d", a, b, c, sum ); //вывод результата
    return 0; //успешное завершение
}