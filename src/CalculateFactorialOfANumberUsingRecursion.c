/* The program is a C program to Calculate Factorial of a Number Using Recursion.
   as factorial of n is n*(n-1)*(n-2)*.....*3*2*1
   Created by : ammar shahin
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

unsigned int factorial(unsigned int);

int main()
{
    uint64_t num[] = {1, 1, 2, 6, 24, 120, 719};
    for (uint8_t i = 0; i < (sizeof(num) / sizeof(uint64_t)); i++)
        if (num[i] != factorial(i))
            printf("ERROR !!!!  %u", i);
    return 0;
}

/* Function to get the factorial of a number */
unsigned int factorial(unsigned int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
