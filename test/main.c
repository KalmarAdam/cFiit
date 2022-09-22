#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------*/
/*     Premenne      */

int main (){
    //deklaracia premennych
    int i, j;
    char c;
    float f;
    double x;

    //inicializacia premennych
    i = 10;
    j = 15;
    c = 'b';
    f = 3.1415926535897932384;
    x = 3.1415926535897932384;

    //vypis viac premennych v jednom printf aj text
    printf("i = %d j = %d\n", i, j);
    printf("i+j = %d\n", (i + j));
    printf("c = %c | %d\n", c, c);
    printf("f = %f, x = %.16lf\n", f, x);

    scanf(" %d %d", &i, &j);
    printf("i = %d, j = %d\n", i, j);

    printf("Zadajte velke pismeno: \n");
    scanf(" %c", &c);
    c = c + 'a' - 'A';

    printf("Male pismeno: %c\n", c);

    return 0;
}