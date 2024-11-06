#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int n1, n2, n3; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите числа в порядке возрастания:\n"); // приглашение для ввода чисел
    scanf("%d%d%d", &n1, &n2, &n3); // cчитывание чисел в переменные
    if (n1 < n2 && n2 < n3) // проверка условия возрастающей последовательности
        printf("YES"); // возрастающая последовательность
    else
        printf("NO"); // последовательность не является возрастающей
    return 0; // успешное завершение
}