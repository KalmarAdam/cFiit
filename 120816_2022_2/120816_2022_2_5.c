#include <stdio.h>

int main (){
    char a, b;
    printf("Zadajte dve velke pismena: \n");
    scanf("%c %c", &a, &b);

    a = a + 'a' - 'A';
    b = b + 'a' - 'A';

    printf("Zmenene pismeno: %c %c\n", b, a);
    return 0;
}
