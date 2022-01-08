#include <stdio.h>
#include <math.h>

#define SIZE 15

unsigned int *ArrMult(unsigned int *a, unsigned int *b)
{
    static unsigned int arrC[SIZE];
    unsigned int i, mult;
    for (i = 0; i < SIZE; i++)
    {
        arrC[i] = a[i] * b[i];
    }
    return &arrC[0];
}

int main(void)
{
    unsigned int i = 0;
    unsigned int arrA[SIZE];
    unsigned int arrB[SIZE];
    unsigned int *arrC;

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
