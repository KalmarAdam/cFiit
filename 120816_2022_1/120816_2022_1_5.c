#include <stdio.h>

int main(){

   double num, sum;

   printf("Napiste polomer kruhu: ");

   scanf("%lf", &num);

   sum = 2 * 3.14 * num;

   printf("Obvod kruhu s polomerom %f je: %f", num, sum);

   return 0;
}
