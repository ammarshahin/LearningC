#include <stdio.h>
#include <math.h>

#define SIZE 10

char digitFreq(unsigned long long num, unsigned char digit)
{
    unsigned char rem, counter = 0;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        if (digit == rem)
            counter++;
    }
    return counter;
}

unsigned char *allNumFreq(unsigned long long num)
{
    static unsigned char arr[SIZE];
    unsigned char rem;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        arr[rem]++;
    }
    return &arr[0];
}

int main(void)
{
    unsigned long long x = 5342546168454241358;

    int digit, digitCounter;
    scanf("%d", &digit);
    digitCounter = digitFreq(x, digit);
    printf("%d ", digitCounter);

#if 0
    unsigned char *arr;
    arr = allNumFreq(x);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
#endif
    return 0;
}
