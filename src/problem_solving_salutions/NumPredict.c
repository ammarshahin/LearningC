#include <stdio.h>
int main()
{
    int res = 1;
    int Guess = 1;
    float temp = 1;
    while (res != 0)
    {
        printf("%d\n", res);
        scanf("%d", &Guess);
        if (Guess == 1)
        {
            if (temp > 0.02)
                temp /= 2;
            res += 100 * temp;
        }
        else if (Guess == 2)
        {
            if (temp > 0.02)
                temp /= 2;
            res -= (float)100 * temp;
        }
        else if (Guess == 0)
        {
            break;
        }
    }
    return 0;
}