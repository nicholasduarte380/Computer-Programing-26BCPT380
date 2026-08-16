#include <stdio.h>
main ()
{
    int a,b,c;
    /* Add, subtract, multiply and divide */
    printf("Enter two nos.");
    scanf("%d %d",&a,&b);

    c = a + b;
    printf("%d + %d = %d\n",a,b,c);

    c = a - b;
    printf("%d - %d = %d\n",a,b,c);

    c = a * b;
    printf("%d * %d = %d\n",a,b,c);

     c = a / b;
     printf("%d / %d = %d\n",a,b,c);

    return 0;
}
