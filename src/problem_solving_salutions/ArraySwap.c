#include <stdio.h>
#define SIZE 10
void swapArr(char *arr, char size)
{
    char i = 0, temp;
    while (i < size)
    {
        temp = arr[i];
        arr[i] = arr[size - 1];
        arr[size - 1] = temp;
        i++;
        size--;
    }
}

int main()
{
    char arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Before Swapping: ");
    for (char i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swapArr(&arr[0], SIZE);

    printf("After Swapping:  ");
    for (char i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}