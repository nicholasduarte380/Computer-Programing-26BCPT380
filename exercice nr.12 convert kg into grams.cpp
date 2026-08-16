#include <stdio.h>
main ()
{
    int kg,grams;
    /* Convert kg into grams */
    printf("Enter kg");
    scanf("%d",&kg);

    grams = kg * 1000;
    printf("%d kg = %d grams\n",kg,grams);

    return 0;
}
