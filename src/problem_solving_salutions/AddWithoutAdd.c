/**
 * Adding tow unsigned numbers this
 *
 *
 */

#include <stdio.h>
#include <stdint.h>

//! Half adder
uint8_t AddWithoutAdd(uint8_t x, uint8_t y)
{
    if ((x & 0x80) && (y & 0x80))
        return 0;

    while (y)
    {
        uint8_t carry = x & y;      // x= 0b1100 0000     // y= 0b0100 0000
        x = x ^ y;                  // x XOR y   >> 0b1000 0000
        if ((carry & 0x80) && (x & 0x80))
            return 0;   // Overflow occurred
        y = carry << 1;
    }
    return x;
}

int main()
{
    // uint8_t x = AddWithoutAdd(2, 3);
    // uint8_t x = AddWithoutAdd(20, 33);
    // uint8_t x = AddWithoutAdd(1, 19);

    uint8_t x = AddWithoutAdd(213, 215);   // should return 0 to indeacate that overflow happed

    printf("%d ", x);

    return 0;
}