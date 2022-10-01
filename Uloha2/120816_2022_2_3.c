#include <math.h>
#include "stdio.h"

int main(){
    double num;

    printf("Napiste cislo: \n");

    scanf("%lf", &num);

    printf("%.0f %.0f \n", trunc(num * 10.0 / 10.0), num);

    return 0;
}