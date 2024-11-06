#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int i, n; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите целое число:\n"); // приглашение для ввода
    scanf("%d", &n); // cчитывание числа в переменную
    for (i=0; n!=0; i++) // цикл для переборки цифр n
    {
        if (n % 10 == (n / 10) % 10) // сравниваем последнюю и предпослднюю цифры
        {
            printf("YES"); // при верном условии печатаем результат и
            break; // сразу выходим из цикла (уже нет смысла проверять следующие варианты)
        }
        n /= 10; // в n отбрасываем последнюю цифру
    }
    if (n == 0) // если число обнулено, то есть цикл отработал полностью и  при этом
        printf("NO"); // результат отрицательный
    return 0; // успешное завершение
}