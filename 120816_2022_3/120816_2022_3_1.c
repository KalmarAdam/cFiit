#include "stdio.h"

int main(){

    
    int hodnotaC1,hodnotaC2;
    char znak;

    printf("Zadajte dve cele cisla a znak z množiny {+, -, *, /}\n");
    scanf("%d %d %c", &hodnotaC1, &hodnotaC2, &znak );

    switch (znak) {
        case '+':
            printf("%d + %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 + hodnotaC2);
            break;
        case '-':
            printf("%d - %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 - hodnotaC2);
            break;
        case '*':
            printf("%d * %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 * hodnotaC2);
            break;
        case '/':
            printf("%d / %d = %d\n",hodnotaC1, hodnotaC2, hodnotaC1 / hodnotaC2);
            break;
        default:
            printf("Zle zadana volba.");

    }
    return 0;
}


