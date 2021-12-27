#include <stdio.h>

int getFallingEdgesCount(int pinLevel);
int main()
{
    printf("%d\n", getFallingEdgesCount(1));
    printf("%d\n", getFallingEdgesCount(1));
    printf("%d\n", getFallingEdgesCount(1));
    printf("%d\n", getFallingEdgesCount(1));
    printf("%d\n", getFallingEdgesCount(0));
    printf("%d\n", getFallingEdgesCount(1));
    printf("%d\n", getFallingEdgesCount(0));
    printf("%d\n", getFallingEdgesCount(0));
    printf("%d\n", getFallingEdgesCount(1));
    return 0;
}

int getFallingEdgesCount(int pinLevel)
{
    static int fallingEdgesCount = 0;
    static int previousLevel = 1;

    if (previousLevel == 1 && pinLevel == 0)
    {
        fallingEdgesCount++;
    }
    previousLevel = pinLevel;

    return fallingEdgesCount;
}