#include <stdio.h>
#define u8 unsigned char

u8 AddWithoutAdd(u8 x, u8 y)
{
    if ((x & 0x80) && (y & 0x80))
        return 0;

    while (y)
    {
        u8 carry = x & y;
        x = x ^ y;
        if ((carry & 0x80) && (x & 0x80))
            return 0;   // Overflow occurred
        y = carry << 1;
    }
    return x;
}

int main()
{
    u8 x = AddWithoutAdd(2, 3);
    // u8 x = AddWithoutAdd(20, 33);
    // u8 x = AddWithoutAdd(1, 19);
    // u8 x = AddWithoutAdd(213, 215);

    printf("%d ", x);
    return 0;
}