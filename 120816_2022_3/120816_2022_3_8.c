#include <stdio.h>

int main() {
    int n;
    printf("Zadajte cislo: \n");
    scanf("%d", &n);

    if(n < 1 || n > 15 || n %2 == 0 ){
        printf("Zly vstup");
    } else {
        int i, j;
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < n; j++) {

                if( j == n/2 ){
                    printf("*");
                } else if( i == n/2 ){
                    printf("*");
                } else if( j == i){
                    printf("*");
                }else if( n - i == j +1){
                    printf("*");
                }else
                    printf("-");

            }
            printf("\n");
        }
    }


    return 0;
}
