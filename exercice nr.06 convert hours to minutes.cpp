#include <stdio.h>
main()
{
    int hours, minutes;
    /* Convert hours into minutes */
    printf("Enter hours");
    scanf("%d",&hours);

    minutes = hours * 60;
    printf("%d hours = %d minutes\n",hours,minutes);

    return 0;
}
