#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    float f;

    x = 81;
    f = 1 / (sqrt(x) + sqrt(2));
    printf("x = %d \n", x);
    printf("f = %.4f \n", f);

    printf("х = ");
    scanf("%d", &x);
    f = 1 / (sqrt(x) + sqrt(2));
    printf("f = %.4f \n", f);

}
