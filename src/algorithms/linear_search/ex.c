#include <stdio.h>
#include <stdint.h>
// #include "src/algorithms/linear_search/linear_search.h"
#include "src/algorithms/linear_search/linear_search.h"

#define SIZE 13

int main()
{
    int arr[SIZE] = {2, 798, 8, 154, 158, 478, 588, 2, 1641, 1654, 2, 64654, 466546};

    //! Print the entered Array
    printf("arr : ");
    int index;
    for (index = 0; index < SIZE; index++)
        printf("%d ", arr[index]);

    //! Get the key from the user
    int key;   // element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    //! Searching...
    printf("\n\nSearching...\n\n");
    foundStr found = linear_search(arr, SIZE, key);
    if (found.first_found_index == -1)
        printf("NOT FOUND!!!\n");
    else
        printf("first found at arr[%d] and was found %d times\n", found.first_found_index, found.count);
    return 0;
}