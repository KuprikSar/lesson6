#include <string.h>
#include <stdio.h>


/*
//Перевод вещественного числа в двоичный вид денормализованный вид
void print_float_bin(float num) 
{
    unsigned int fi;
    memcpy(&fi,&num,4); //копируем память - функция из библиотеки string.h
    for(int i=31;i>=0;i--) 
    {
        if(i==30 || i==22)
        putchar(' ');
        if(fi&(1<<i))
        putchar('1');
        else
        putchar('0');
    }
    putchar('\n');
}

int main()
{
    
    // тип float 4 байта
    // S - знак числа 1 бит
    // P - порядок 8 бит
    // M - мантисса 23 бита
    
    float f;
    printf("number float: ");
    scanf("%f", &f);
    print_float_bin(f);
    return 0;
}
*/

