//Дана последовательность целых чисел через пробел, завершающаяся числом 0.
//Выведите все нечетные числа из этой последовательности, сохраняя их порядок. 

#include <stdio.h>

void recur(void) 
{
    int n;
    scanf("%d", &n);
    
    if (n != 0) 
    {
        if (n % 2 != 0) 
        {
            printf("%d ", n);
        }
        recur();
    }
}

int main() 
{
    printf("enter numbers ('0' to exit): ");
    recur();
    
    return 0;
}