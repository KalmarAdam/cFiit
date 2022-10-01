#include <stdio.h>

int main(){
    double num1, num2, sum;

    printf("Napiste vasu vysku(cm) a vahu(kg):\n");

    scanf("%lf %lf", &num1, &num2);

    sum = (num2) / ((num1 * 0.01) * (num1 * 0.01));
    printf("BMI: %.3f\n",sum);

    return 0;
}
