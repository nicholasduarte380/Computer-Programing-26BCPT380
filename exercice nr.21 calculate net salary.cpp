#include<stdio.h>

main()
{
    int gross,allowance,deduction,net;

    /* Calculate net salary */
    printf("Enter gross salary:");
    scanf("%d",&gross);

    allowance = gross * 10 / 100;
    deduction = gross * 3 / 100;

    net = gross + allowance - deduction;

    printf("Allowance = %d\n",allowance);
    printf("Deduction = %d\n",deduction);
    printf("Net Salary = %d\n",net);

    return 0;
}
