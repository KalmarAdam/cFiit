#include <stdio.h>

int main(){
   double num;
   printf("Zadaj lubovolne cislo: ");

   scanf("%lf", &num);

   printf("Cena bez dane:%lf ", num);
   printf("Predajna cena s danou 20%% %lf", num *1.2);
}