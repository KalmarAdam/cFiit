#include <stdio.h>

int main(){
    int num1, num2;

    printf("Napiste dve cele cisla: ");

    scanf("%d %d", &num1, &num2);

    printf("Sucet nacitanych cisel je: %d \n",num1 + num2);
    printf("Sucin nacitanych cisel je: %d \n",num1 * num2);
    return 0;
}