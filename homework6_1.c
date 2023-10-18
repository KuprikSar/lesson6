//Дано натуральное число N. Выведите все его цифры по одной, в прямом
//порядке, разделяя их пробелами или новыми строками. Необходимо
//реализовать рекурсивную функцию.

#include <stdio.h>

void recur(int n)
{
    if (n >= 10)
    {
        recur(n / 10);
    }
    printf("%d ", n % 10);
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    recur(n);
    return 0;
}