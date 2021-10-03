#include <stdio.h>
#include <math.h>


//функция для вычислительных операций
double f(double x)
{
    double calc = 1 / (sqrt(x) + sqrt(2));
    return calc;
}


//функция для ввода-вывода
int main(void)
{
    //вычисление для исходных данных в виде констант
    int a = 81;
    f(a);
    printf("x = %d \n", a);
    printf("f = %.4f \n", f(a));

    //вычисление для ввода данных с клавиатуры
    printf("х = ");
    scanf("%d", &a);
    f(a);
    printf("f = %.4f \n", f(a));

}

