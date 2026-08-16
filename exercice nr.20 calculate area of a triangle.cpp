#include<stdio.h>

main()
{
    int H,L,A;

    /* Area of triangle */
    printf("Enter height and length:");
    scanf("%d %d",&H,&L);

    A = H * L / 2;

    printf("Area = %d\n",A);

    return 0;
}
