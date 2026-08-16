#include<stdio.h>

main()
{
    int P,R,N,I;

    /* Calculate interest */
    printf("Enter P, R and N:");
    scanf("%d %d %d",&P,&R,&N);

    I = P * R * N / 100;

    printf("Interest = %d\n",I);

    return 0;
}
