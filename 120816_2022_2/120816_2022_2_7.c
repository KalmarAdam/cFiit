#include "stdio.h"

int main(){

    int hodnotaC1,hodnotaC2;
    char znak;

    printf("Zadajte dve cele cisla a znak z množiny {+, -, *, /}\n");
    scanf("%d %d %c", &hodnotaC1, &hodnotaC2, &znak );

    if(znak == '+'){
        printf("%d + %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 + hodnotaC2);
    } else if(znak == '-'){
        printf("%d - %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 - hodnotaC2);
    } else if(znak == '*'){
        printf("%d * %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 * hodnotaC2);
    } else if(znak == '/'){
        printf("%d / %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 / hodnotaC2);
    }

    return 0;
}



