#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int n=1, k=0; // объявление переменных
    while (n!=0) // цикл для подсчета чисел, если введен 0 - выходим из цикла
    {
        setlocale(LC_ALL, ".utf-8"); // локализация
        printf("Введите последовательность чисел через пробел. Признак окончания последвательности - 0:\n"); // приглашение для ввода последовательности
        scanf("%d", &n); // cчитывание числа в переменую
        if(n % 2 == 0)
            k++;
    }
    printf("%d\n",k-1); // вывод результата
    return 0;
}