// A C program to count number of ways to reach n't stair when
// a person can climb 1, 2, ..m stairs at a time
#include <stdio.h>

// 1,1,2,4,7,13,24,44,

// A recursive function used by countWays
int StairCases(int n)
{
    int res[10];
    for (int i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            res[i] = 1;
        }
        else if (i == 2)
        {
            res[i] = 2;
        }
        else
        {
            res[i] = res[i - 1] + res[i - 2] + res[i - 3];
        }
    }
    return res[n];
}

// Driver program to test above functions
int main(int argc, char *argv[])
{
    int s = 1;
    printf("Nuber of ways = %d", StairCases(s));
    return 0;
}

#if 0
#include "stdio.h"

int stairsSteps(int num)
{
    int count;
    if (num > 0)
    {
        count = stairsSteps(num - 1) +
                stairsSteps(num - 2) +
                stairsSteps(num - 3);
    }
    else if (num < 0)
    {
        count = 0;
    }
    else if (num == 0)
    {
        count = 1;
    }
    else
    {
        // Do Nothing
    }
    return count;
}

int main()
{
    int num, count;
    printf("Enter the number of stairs: ");
    scanf("%d", &num);
    count = stairsSteps(num);
    printf("\nthe number of possible ways are: %d\n", count);
    return 0;
}
#endif