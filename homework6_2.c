//Составить рекурсивную функцию. Выведите все числа от A до B
//включительно, в порядке возрастания, если A < B, или в порядке убывания в
//противном случае

#include <stdio.h>

void recur(int n, int x)
{
    if (n < x)
    {
        printf("%d ", n);
        recur((n + 1), x);
    }
    else if (n > x)
    {
        recur(n, (x + 1));
        printf("%d ", x);
    }
}

int main()
{
    int a, b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    recur(a, b);
    return 0;
}