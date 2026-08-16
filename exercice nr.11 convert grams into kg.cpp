#include <stdio.h>
main ()
{
    int grams,kg;
    /* Convert grams into kg */
    printf("Enter grams");
    scanf("%d",&grams);

    kg = grams / 1000;
    printf("%d grams = %d kg\n",grams,kg);

    return 0;
}
