#include <stdio.h>
main ()
{
    int dollars,pound;
    /* Convert dollars into pound */
    printf("Enter dollar");
    scanf("%d",&dollars);

    pound = dollars * 0.74;
    printf("%d dollars = %d pound\n",dollars,pound);

    return 0;
}
