#include <stdio.h>
main ()
{
    int bytes,Kbytes,Mbytes,Gbytes;
    /* Convert bytes into Kbytes,Mbytes,Gbytes */
    printf("Enter bytes");
    scanf("%d",&bytes);

    Kbytes = bytes / 1024;
    Mbytes = bytes / (1024 * 1024);
    Gbytes = bytes / (1024 * 1024 * 1024);

    printf("%d Kbytes = bytes\n",Kbytes);
    printf("%d Mbytes = bytes\n",Mbytes);
    printf("%d Gbytes = bytes\n",Gbytes);

    return 0;

}
