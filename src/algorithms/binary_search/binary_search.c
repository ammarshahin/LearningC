/* The program is a C Program to Do the Binary(Order) Search Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include "../bubble_sort/bubble_sort.h"
#include "binary_search.h"

#define Debug 1

extern foundStr binary_search(const int *arr, const int size, const int key)
{
    foundStr found = {-1, 0};

    int hi, lo;   // the boundary of the search
    hi = size - 1;
    lo = 0;

    //! Applying the Algorithm
    while (found.first_found_index == -1 && lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (arr[mid] > key)
            hi = mid - 1;
        else if (arr[mid] < key)
            lo = mid + 1;
        else   // ==  found
        {
            found.first_found_index = mid;
            found.count++;

            int first_found_sorted = mid;
            while (mid > 0 && arr[mid] == arr[mid - 1])
            {
                found.first_found_index = mid - 1;
                found.count++;
                mid--;
            }

            mid = first_found_sorted;
            while (mid < size - 1 && arr[mid] == arr[mid + 1])
            {
                found.count++;
                mid++;
            }
        }
    }

    return found;
}
