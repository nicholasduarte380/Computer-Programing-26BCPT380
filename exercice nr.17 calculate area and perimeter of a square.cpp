#include<stdio.h>

main()
{
    int L,A,P;

    /* Area and perimeter of square */
    printf("Enter length:");
    scanf("%d",&L);

    A = L * L;
    P = 4 * L;

    printf("Area = %d\n",A);
    printf("Perimeter = %d\n",P);

    return 0;
}
