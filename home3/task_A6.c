#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int a, b, dif; //объявление переменных
    setlocale(LC_ALL, ".utf-8"); //локализация
    printf("Введите 2 числа через пробел:\n"); //приглашение для ввода чисел
    scanf("%d%d", &a, &b); //cчитывание чисел в переменные
    dif = a - b; //разность чисел
    printf("%d", dif); //вывод результата
    return 0; //успешное завершение
}