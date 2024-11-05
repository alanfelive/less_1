#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    int n; // объявление переменных
    setlocale(LC_ALL, ".utf-8"); // локализация
    printf("Введите номер месяца года:\n"); // приглашение для ввода номера
    scanf("%d", &n); // cчитывание введенного номера в переменную
    if (n <= 5 && n >= 3) 
        printf("spring"); // весна
    else if (n <= 8 && n >= 6) 
        printf("summer"); // лето
    else if (n <= 11 && n >= 9) 
        printf("autumn"); // осень
    else
        printf("winter"); // зима
    return 0; // успешное завершение
}