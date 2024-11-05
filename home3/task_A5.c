#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b, c; //объявление переменных
    float mean;
    setlocale(LC_ALL, ".utf-8"); //локализация
    printf("Введите 3 числа через пробел:\n"); //приглашение для ввода чисел
    scanf("%d%d%d", &a, &b, &c); //cчитывание чисел в переменные
    mean = (float)(a + b + c) / 3; //вычисление среднего арифметического чисел
    printf("%.2f", mean); //вывод результата
    return 0; // успешное завершение
}