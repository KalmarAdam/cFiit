#include "stdio.h"

int main(){

    int a,b;
    printf("Zadajte dve cele cisla:\n");
    scanf("%d %d", &a, &b);


    if(a <= b){
        printf("Cislo C1=%d je mensie ako C2=%d\n", a, b);
    } else{
        printf("Cislo C1=%d je vacsie ako C2=%d\n", a, b);
    }

    return 0;
}