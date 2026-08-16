#include <stdio.h>
main()
{
    int minutes, hours;
    /* Convert minutes into hours */
    printf("Enter minutes");
    scanf("%d",&minutes);

    hours = minutes / 60;
    printf("%d minutes = %d hours\n",minutes,hours);

    return 0;
}
