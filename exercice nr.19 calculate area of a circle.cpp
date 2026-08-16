#include<stdio.h>

main()
{
    int R,A;

    /* Area of circle */
    printf("Enter radius:");
    scanf("%d",&R);

    A = 22 * R * R / 7;

    printf("Area = %d\n",A);

    return 0;
}
