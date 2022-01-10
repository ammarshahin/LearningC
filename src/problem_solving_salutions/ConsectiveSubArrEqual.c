#include <stdio.h>
#define SIZE 10

int *subArr(int *arr, int size, int num, int *NoOfCom)
{
    static int subArr[SIZE];
    int sum = 0, startOfCom = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum < num)
        {
            subArr[i] = arr[i];
        }
        else if (sum > num)
        {
            subArr[startOfCom] = 0;
            i = startOfCom;
            startOfCom++;
            sum = 0;
        }
        else
        {
            subArr[i] = arr[i];
            (*NoOfCom)++;
            sum = 0;
            startOfCom = i + 1;
        }
    }
    return &subArr[0];
}

int main()
{
    int arr[SIZE] = {7, 6, 1, 1, 2, 3, 1, 4, 3, 4};
    int *pSubarr;
    int NoOfCom = 0;

    pSubarr = subArr(&arr[0], SIZE, 7, &NoOfCom);

    printf("No of combinations:  %d", NoOfCom);

    printf("\n");

    /* Array with combinations to the number */
    for (int i = 0; i < SIZE; i++)
        printf("%d ", pSubarr[i]);

    return 0;
}