#include <stdio.h>

int main(void)
{
    int x = 0x1000;   //*  x = 0x12345678
    char *px = (char *)&x;

    if (*px)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}