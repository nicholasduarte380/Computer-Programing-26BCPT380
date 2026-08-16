#include<stdio.h>

main()
{
    int gross,discount,net;

    /* Calculate net sales */
    printf("Enter gross sales:");
    scanf("%d",&gross);

    discount = gross * 10 / 100;
    net = gross - discount;

    printf("Discount = %d\n",discount);
    printf("Net Sales = %d\n",net);

    return 0;
}
