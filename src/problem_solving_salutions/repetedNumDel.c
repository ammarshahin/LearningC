#include <stdio.h>

/* Function to remove duplicate elements, This function returns new size of modified array >> (Must be Sorted) */
void remove_duplicates_in_sorted_array(const int arr_old[], const int oldSize, int *const arr_new, int *const newSize)
{

    // TODO : Sort it if it wasn't sorted

    int i = 0;
    for (; i < oldSize - 1; i++)
    {
        /* If current element is not equal to next element then store that current element in the new array */
        if (arr_old[i] != arr_old[i + 1])
        {
            arr_new[*newSize] = arr_old[i];
            (*newSize)++;
        }
    }

    /* Store the last element as whether it is unique or repeated, it hasn't stored previously */
    arr_new[*newSize] = arr_old[i];
    (*newSize)++;
}

int main(void)
{
    int arr1[] = {1, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6};
    int newSize = 0, oldSize = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[11];

    /* the function shall remove the repeated numbers in arr1 and create a new array arr2 with size equals to arr2_usedSize */
    removeDuplicates(arr1, oldSize, arr2, &newSize);

    for (int i = 0; i < newSize; i++)
        printf("%d ", arr2[i]);
}