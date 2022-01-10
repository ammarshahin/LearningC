// A C program to count number of ways to reach n't stair when
// a person can climb 1, 2, 3 stairs at a time
#include <stdio.h>

// 1,1,2,4,7,13,24,44,

// A recursive function used by countWays
int StairCases(int n)
{
    int res[30] = {0};
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

    for (int i = 0; i < 30; i++)
    {
        printf("%d ", res[i]);
    }

    return res[n];
}

int main(int argc, char const *argv[])
{
    int s = 20;
    printf("\nNumber of ways = %d\n", StairCases(s));
    return 0;
}