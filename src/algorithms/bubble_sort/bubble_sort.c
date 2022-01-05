/* The program is a C Program to Do the Bubble Sort Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <stdbool.h>
#include "bubble_sort.h"

#define Debug 0

static void swap(int *x, int *y);

void bubble_sort(int *arr, const int size)
{

    int index, array_end = size - 1;
    bool isSorted;   // flag is to indicate whether the array is already sorted or not to save some loops

#if Debug
    int c1 = 0, c2 = 0;   // C1 and C2 are debugging counters
#endif
    /* Applying the Algorithm */
    do
    {
        isSorted = true;
        for (index = 0; index < array_end; index++)
        {
            if (arr[index] > arr[index + 1])
            {
                swap(&arr[index], &arr[index + 1]);
                isSorted = false;
            }
#if Debug
            c1++;
#endif
        }
#if Debug
        c2++;
#endif
        array_end--;
    } while (array_end > 0 && !isSorted);

#if Debug
    /* Displaying the debugging Variables */
    printf("\n\n");
    printf("flag= %d   C1= %d    C2= %d\n", flag, c1, c2);
#endif
}

static void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
