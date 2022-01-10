#include <stdio.h>
#include <stdint.h>

uint8_t consecutiveZeros(uint64_t num)
{
    char firstZeroFlag = 0, secondZeroFlag = 0;
    int zerosCount = 0;
    int zerosCountMax = -1;

    for (uint8_t i = 0; i < (sizeof(int) * 8); i++)
    {
        uint8_t LSB = (num >> i) & 0x01;

        if (LSB == 1)
        {
            if (firstZeroFlag == 0)
            {
                firstZeroFlag = 1;
            }
            else if (firstZeroFlag == 1)
            {
                secondZeroFlag = 1;
            }
        }
        else if ((LSB == 0) && (firstZeroFlag == 1))
        {
            zerosCount++;
        }

        if (secondZeroFlag == 1)
        {
            if (zerosCount > zerosCountMax)
            {
                zerosCountMax = zerosCount;
            }
            secondZeroFlag = 0;
            zerosCount = 0;
        }
    }
    return zerosCountMax;
}

int main()
{
    uint64_t num;
    printf("Enter the Number: ");
    scanf("%llu", &num);

    uint8_t count = consecutiveZeros(num);
    printf("\nthe Number of zeros is: %d\n", count);

    return 0;
}