#include<stdio.h>

main()
{
    int a,b,temp;

    /* Swap two values */
    printf("Enter two values:");
    scanf("%d %d",&a,&b);

    printf("Before swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}
