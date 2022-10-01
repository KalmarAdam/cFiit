#include <stdio.h>

int main(){
    double num1, num2, num3, sum;

    printf("Napiste tri cele cisla:\n");

    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = (num1 + num2 + num3) /3;
    printf("Priemer cisel %f %f %f je: %g\n",num1, num2, num3, sum);

    return 0;
}
