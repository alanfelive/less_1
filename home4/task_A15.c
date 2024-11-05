#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int x1, y1, x2, y2; // объявление переменных
    float k, b;
    setlocale(LC_ALL, ".utf-8"); // локализация
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2); // cчитывание чисел в переменные
    k = (float)(y1 - y2) / (x1 - x2); 
    b = y2 - k * x2;
    printf("%.2f %.2f", k, b); // выводим сумму минимального и максимального чисел
    return 0; // успешное завершение
}