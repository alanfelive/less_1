#include <stdio.h> //Объявить библиотеки ввода-вывода

int main(void)
{
    int a, b, c; //объявить переменные
    float mean; //объявить переменные
    printf("Input number:\n");//ввести числа
    scanf ("%d%d%d", &a, &b, &c); //cчитать числа и записать их в переменные
    mean = (float)(a + b + c) / 3; //вычисление среднего арифметического
    printf ("%.2f", mean);//вывести на экран среднее арифметическое
    return 0; //завершить программу успешно
}