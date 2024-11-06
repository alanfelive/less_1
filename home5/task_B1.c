#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    int i, n, q, c; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите натуральное число не больше 100:\n"); // приглашение для ввода
    scanf("%d", &n); // cчитывание чисел в переменные
    for (i = 1; i <= n; i++) // переборка значений от 1 до n включительно
    {
        q = pow(i, 2); // возведение в квадрат
        c = pow(i, 3); // возведение в куб
        printf("%d %d %d\n", i, q, c); // печать результата
    }
    return 0; // успешное завершение
}