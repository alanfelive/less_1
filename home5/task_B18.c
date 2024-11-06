#include <stdio.h>
// воспользовался готовым решением
int main(void)
{
unsigned int a, prev1 = 0, prev2 = 1, fib = 0;
    scanf("%d", &a);
    printf("%d ", prev1 + prev2);
    for (int i = 1; i <= a - 1; i++)
    {
        fib = prev1 + prev2;
        printf("%d ", fib);
        prev1 = prev2;
        prev2 = fib;
    }
    return 0;
}
