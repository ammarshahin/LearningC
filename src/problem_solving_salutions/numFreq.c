#include <stdio.h>
#include <stdint.h>

#define SIZE 10

uint8_t *allNumFreq(uint64_t num)
{
    static uint8_t arr[SIZE];
    while (num)
    {
        uint8_t rem = num % 10;
        num /= 10;
        arr[rem]++;
    }
    return &arr[0];
}

uint8_t digitFreq(uint64_t num, uint8_t digit)
{
    uint8_t counter = 0;
    while (num)
    {
        uint8_t rem = num % 10;
        num /= 10;
        if (digit == rem)
            counter++;
    }
    return counter;
}

int main(void)
{
    uint64_t x = 5342546168454241358;

    uint8_t digit;
    scanf("%d", &digit);

    if (digit < 10)
    {
        printf("%d\n", digitFreq(x, digit));
    }
    else
    {
        printf("Wrong Entry: Number should be between 0 and 9\n");
    }

#if 1
    uint8_t *arr;
    arr = allNumFreq(x);
    for (uint8_t i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
#endif
    return 0;
}
