#include <stdio.h>

int findMax(int maxi)
{
    int n;
    scanf("%d",&n);
    if(!n)
        return maxi;
    if(maxi == 0 || n >= maxi)
        maxi = n;
    return findMax(maxi);
}

int main(void)
{
    printf("%d ", findMax(0));
    return 0;
}