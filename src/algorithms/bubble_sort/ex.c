#include <stdio.h>
#include <stdint.h>
// #include "src/algorithms/linear_search/linear_search.h"
#include "src/algorithms/bubble_sort/bubble_sort.h"

#define SIZE 13

int main()
{
    int arr[SIZE] = {2, 798, 8, 154, 158, 478, 588, 2, 1641, 1654, 2, 64654, 466546};

    //! Print the entered array
    printf("arr : ");
    int index;
    for (index = 0; index < SIZE; index++)
        printf("%d ", arr[index]);

    //! Sorting
    printf("\n\nSorting...\n\n");
    bubble_sort(arr, SIZE);

    //! Print the array after sorting
    printf("arr : ");
    for (index = 0; index < SIZE; index++)
        printf("%d ", arr[index]);

    return 0;
}