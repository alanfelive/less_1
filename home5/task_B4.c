#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int i, n; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 3-значное число:\n"); // приглашение для ввода
    scanf("%d", &n); // cчитывание числа в переменные
    for (i=0; n!=0; i++, n=n/10){} // считаем разряды введенного числа путем целочисленного деления на 10 в цикле
    if (i==3) // является ли число на трехзначным
        printf("YES");
    else
        printf("NO");
    return 0; // успешное завершение
}