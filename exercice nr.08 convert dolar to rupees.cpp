#include <stdio.h>
main ()
{
    int dollars, rupees;
    /* Convert dollars to rupees */
    printf("Enter dollars");
    scanf("%d",&dollars);

    rupees = dollars * 48;
    printf("%d dollars = %d rupees\n",dollars,rupees);

    return 0;
}
