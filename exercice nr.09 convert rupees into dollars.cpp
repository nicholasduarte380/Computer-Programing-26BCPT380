#include <stdio.h>
main ()
{
    int rupees,dollars;
    /* Convert rupees into dollar */
    printf("Enter rupees");
    scanf("%d",&rupees);

    dollars = rupees / 48;
    printf("%d rupees = %d dollars\n",rupees,dollars);

    return 0;
}
