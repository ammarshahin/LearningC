#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SIZE 15

uint8_t *ArrMult(uint8_t *a, uint8_t *b)
{
    static uint8_t arrC[SIZE];
    for (uint8_t i = 0; i < SIZE; i++)
    {
        arrC[i] = a[i] * b[i];
    }
    return &arrC[0];
}

int main(void)
{
    uint8_t i = 0;
    uint8_t arrA[SIZE];
    uint8_t arrB[SIZE];
    uint8_t *arrC;

    for (i = 0; i < SIZE; i++)
    {
        arrA[i] = pow(2, i);
        arrB[i] = pow(3, i);
    }

    arrC = ArrMult(arrA, arrB);

    for (i = 0; i < SIZE; i++)
        printf("%d ", arrA[i]);

    printf("\n");

    for (i = 0; i < SIZE; i++)
        printf("%d ", arrB[i]);

    printf("\n");

    for (i = 0; i < SIZE; i++)
        printf("%d ", arrC[i]);

    printf("\n");

    return 0;
}
