#include<stdio.h>

main()
{
    int F,C;

    /* Convert Fahrenheit into Celsius */
    printf("Enter Fahrenheit:");
    scanf("%d",&F);

    C = (5 * (F - 32)) / 9;

    printf("Celsius = %d\n",C);

    return 0;
}
