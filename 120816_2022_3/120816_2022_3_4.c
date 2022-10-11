#include <stdio.h>

int main() {
    int n,i, num, sum = 0;
    printf("Zadajte pocet cisel n: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%d", &num);
        if(num <= 1000 && num >= 0){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
