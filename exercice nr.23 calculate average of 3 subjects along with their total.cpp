#include<stdio.h>

main()
{
    int a,b,c,total,average;

    /* Calculate total and average */
    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d",&a,&b,&c);

    total = a + b + c;
    average = total / 3;

    printf("Total = %d\n",total);
    printf("Average = %d\n",average);

    return 0;
}
