#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int n1, n2, n3, n4, n5, mini, maxi; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите 5 чисел через пробел:\n"); // приглашение для ввода чисел
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5); // cчитывание чисел в переменные
    maxi = mini = n1; // изначально принимаем первое число минимальным и максимальным одновременно
    // поочередно сравниваем последующие числа с минимальным (максимальным), если оно меньше (больше), то принимаем его за минимальное (максимальное) число
    if (n2 < mini) 
        mini = n2; // минимальное число n2
    if (n2 > maxi) 
        maxi = n2; // максимальное число n2
    if (n3 < mini) 
        mini = n3; // минимальное число n3
    if (n3 > maxi) 
        maxi = n3; // максимальное число n3
    if (n4 < mini) 
        mini = n4; // минимальное число n4
    if (n4 > maxi) 
        maxi = n4; // максимальное число n4
    if (n5 < mini) 
        mini = n5; // минимальное число n5
    if (n5 > maxi)
        maxi = n5; // максимальное число n5
    printf("%d", mini + maxi); // выводим сумму минимального и максимального чисел
    return 0; // успешное завершение
}