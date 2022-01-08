#include <stdio.h>

int consectiveZeros(int num)
{
    char iterativeIndex;
    char firstZeroFlag = 0, secondZeroFlag = 0;
    char LSB;
    int zerosCount = 0;
    int zerosCountMax = -1;

    for (iterativeIndex = 0; iterativeIndex < (sizeof(int) * 8); iterativeIndex++)
    {
        LSB = (num >> iterativeIndex) & 0x01;

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
    int num, count;
    printf("Enter the Number: ");
    scanf("%d", &num);
    count = consectiveZeros(num);
    printf("\nthe Number of zeros is: %d\n", count);
    return 0;
}