#include <stdio.h>
#include "stdint.h"

int main()
{
    uint64_t x, sum = 0;
    for (x = 0; x < 100000000; x++)
        sum += x;
    printf("%llu\n", sum);
    return 0;
}