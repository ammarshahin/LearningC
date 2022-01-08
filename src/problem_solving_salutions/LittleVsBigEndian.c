#include <stdio.h>

int main(void)
{
    int x = 1;
    char *px;
    px = (char *)&x;

    if (*px)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}