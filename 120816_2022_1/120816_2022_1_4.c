#include <stdio.h>

int main(){
   int num, sum;

   printf("Napiste cele cislo: ");

   scanf("%d", &num);

   sum = num * num;

   printf("Druha mocnina cisla %d je: %d", num, sum);
   return 0;
}