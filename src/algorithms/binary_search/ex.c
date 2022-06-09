#include <stdio.h>
#include <stdint.h>
#include "binary_search.h"
#include "../bubble_sort/bubble_sort.h"

#define SIZE 13

int main()
{
    int arr[SIZE] = {2, 798, 8, 154, 158, 478, 588, 2, 1641, 1654, 2, 1641, 1641};

    //* Sorting
    bubble_sort(arr, SIZE);

    //! Print the entered Array
    printf("arr : ");
    int index;
    for (index = 0; index < SIZE; index++)
        printf("%d ", arr[index]);

    //! Get the key from the user
    int key;   // element to search for
    printf("\nEnter the element to search for: ");
    scanf("%d", &key);

    //! Searching...
    printf("\n\nSearching...\n\n");
    foundStr found = binary_search(arr, SIZE, key);
    if (found.first_found_index == -1)
        printf("NOT FOUND!!!\n");
    else
        printf("first found at arr[%d] and was found %d times\n", found.first_found_index, found.count);
    return 0;
}