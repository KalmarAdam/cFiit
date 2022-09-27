#include <math.h>
#include "stdio.h"

int main(){
    double num;

    printf("Napiste cislo: \n");

    scanf("%lf", &num);

    printf("%f %.0f", num, num);
    double x = 0;
    printf("%.1f", trunc(num * 10.0) / 10.0);

    return 0;
}