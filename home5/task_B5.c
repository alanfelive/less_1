#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int i, n, sum=0; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите целое число:\n"); // приглашение для ввода
    scanf("%d", &n); // cчитывание числа в переменную
    for (i=0; n!=0; i++) // цикл для переборки цифр n и их суммирования
    {
        sum += n % 10; // прибавляем последнюю цифру справа
        n = n / 10; // учтенную цифру справа отбрасываем
    }
    printf("%d\n", sum); // вывод результата суммирования
    return 0; // успешное завершение
}