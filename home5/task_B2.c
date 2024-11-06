#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    int i, n1, n2, q; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 2 целых числа через пробел:\n"); // приглашение для ввода
    scanf("%d%d", &n1, &n2); // cчитывание чисел в переменные
    for (i = n1; i <= n2; i++) // переборка значений от n1 до n2 включительно
    {
        q = pow(i, 2); // возведение в квадрат
        printf("%d\n", q); // печать результата
    }
    return 0; // успешное завершение
}