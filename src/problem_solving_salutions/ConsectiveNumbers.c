#include <stdio.h>

#define SIZE 18

int consNum(int *arr, int size, int num)
{
    char found = 0, maxfound = 0;
    char i, j;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            found = 0;
            while (arr[i] == num)
            {
                found++;
                i++;
            }

            if (found > maxfound)
            {
                maxfound = found;
            }
        }
    }
    return maxfound;
}

int main(void)
{
    int arr[SIZE] = {1, 22, 3, 1, 1, 1, 3434, 1, 1, 1, 1, 1, 1, 1, 4343, 1, 1, 1};
    int found = consNum(&arr[0], SIZE, 1);
    printf("found = %d\n", found);
    return 0;
}