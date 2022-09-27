#include <stdio.h>

int main(){
   double num1, num2, num3, sum;

   printf("Napiste tri cele cisla: ");

   scanf("%lf %lf %lf", &num1, &num2, &num3);

   sum = num1 * num2 * num3;

   printf("Objem: %.3f \n",sum);
   return 0;
}