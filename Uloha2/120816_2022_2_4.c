#include <stdio.h>

int main (){
    char a, b;
    printf("Zadajte dve male pismena: \n");
    scanf("%c %c", &a, &b);

        a = a + 'A' - 'a';
        b = b + 'A' - 'a';

    printf("Zmenene pismeno: %c %d %c %d\n", a, a, b, b);
    return 0;
}
