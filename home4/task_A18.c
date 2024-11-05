#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 2 числа через пробел:\n"); // приглашение для ввода чисел
    scanf("%d%d", &a, &b); // cчитывание чисел в переменные
    if (a == b) // сравнение введенных чисел
        printf("Equal"); // равны
    else if (a > b)
        printf("Above"); // первое число больше
    else
        printf("Less"); // второе число больше
    return 0; // успешное завершение
}