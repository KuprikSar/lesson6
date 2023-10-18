//Дана строка из английских символов, пробелов и знаков препинания. В конце
//строки символ точка. Необходимо реализовать рекурсивную функцию,
//которая считывает данную строку со стандартного потока ввода и возвращает
//целое число – количество символов 'a' в данной строке.
//int acounter(void)
//Используя данную функцию решить задачу.

#include <stdio.h>

int recur(void) 
{
    char c;
    scanf("%c", &c);
    
    if (c == '.') 
    {
        return 0;
    } 
    else 
    {
        if (c == 'a' || c == 'A') 
        {
            return 1 + recur();
        } 
        else 
        {
            return recur();
        }
    }
}

int main() 
{
    printf("enter stroke (symbol '.' for end): ");
    int count = recur();
    
    printf("count of 'a' symbols: %d\n", count);
    
    return 0;
}