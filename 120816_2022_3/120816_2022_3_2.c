#include<stdio.h>
int main()
{
    double i, n, x, min, max;

    printf ("Zadajte pocet cisel: \n");
    scanf ("%lf", &x);

    printf ("Zadajte cisla: \n");
    scanf ("%lf", &n);

    max = n;
    min=n;

    for (i=1; i<= x -1 ; i++)
    {
        scanf ("%lf",&n);
        if (n>max){
            max=n;
        }

        if (n<min){
            min=n;
        }
    }

    printf ("Minimum: %0.2f\n", min);
    printf ("Maximum: %0.2f\n", max);

    return 0;
}