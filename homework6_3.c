//Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.

#include <stdio.h>

int recur(int n) 
{
    if (n == 0) 
    {
        return 0;
    } 
    else if (n % 2 == 1) 
    {
        return 1 + recur(n / 2);
    } 
    else 
    {
        return recur(n / 2);
    }
}

int main()
{
    int n;
    printf("enter number a: ");
    scanf("%d",&n);
    int count = recur(n);
    printf("Count of numbers '1': %d\n", count);
    return 0;
}