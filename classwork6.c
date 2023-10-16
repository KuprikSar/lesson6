#include <string.h>
#include <stdio.h>

/*
int recur(int n)
{
    return (n == 1) ? 1 : n + recur(n - 1);
}
    int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n", recur(n));
    return 0;
}
*/

// в обратном порядке
 /*
void recur(int n)
{
    printf("%d", n % 10);
    if (n >= 10)
    {
        recur(n / 10);
    }
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    recur(n);
    return 0;
}
*/

/*
// проверка на простоту числа (которое делится на 1 и на само себя)
int is_prime(int n, int divider)
{
    if (n == divider)
    return 1;
    if ((n > 1) && (n % divider != 0))
    return is_prime(n, divider +
    1);
    else
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    is_prime(n, 2) ? printf("YES") :
    printf("NO");
    return 0;
}
*/

/*
//Написать рекурсивную функцию и используя ее решить задачу. Напечатать цифры
//введенного натурального числа в порядке следования(слева направо) через пробел.
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
*/

/*
// Составить рекурсивную функцию, печать всех простых множителей числа.
void rec(int a,int b)
{
    if(a==1)
    return;
    while (1)
    {
        if(a%b==0)
        {
            printf("%d ",b);
            rec(a/b,b);
            return;
        }
        b++;
    }
}


int main(void)
{
    int a;
    scanf("%d",&a);
    rec(a,2);
    return 0;
}
*/

/*
//Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
int recur(int n)
{
    if (n == 1)
    {
        return n;
    }
    else if (n % 2 == 0)
    {
        n = n / 2;
        return recur(n);
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    recur(n) > 0 ? printf("YES\n") : printf("NO\n");
    return 0;
}
*/


//Дана монотонная последовательность, в которой каждое натуральное число k
//встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,… Выведите первые n членов
//этой последовательности. Только один цикл for.
void recur(int num, int count, int n) 
{
    if (count >= n) 
    {
        return;
    }
    for (int i = 0; i < num && count < n; i++) 
    {
        printf("%d ", num);
        count++;
    }
    recur(num + 1, count, n);
}

int main() 
{
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    recur(1, 0, n);
    return 0;
}