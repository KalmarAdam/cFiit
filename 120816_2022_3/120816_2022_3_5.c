#include <stdio.h>

int main()
{
    int data = 0,i,fact=1;
    while (data < 1) {
        printf("Zadajte cislo: ");
        scanf("%d", &data);
    }

    for(i=1;i<=data;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);

    return 0;
}

