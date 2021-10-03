#include "stdio.h"
#include <stdlib.h>

extern double F(double x);

//функция для ввода-вывода
int main(void)
{
    //вычисление для исходных данных в виде констант
    int a = 81;
    F(a);
    printf("x = %d \n", a);
    printf("f = %.4f \n", F(a));

    //вычисление для ввода данных с клавиатуры
    printf("х = ");
    scanf("%d", &a);
    F(a);
    printf("f = %.4f \n", F(a));

}