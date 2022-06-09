/* The program is a C Program to Do the Linear Search Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include "linear_search.h"

/* Public API's */
extern foundStr linear_search(const int *arr, const int size, const int key)
{

    foundStr found = {-1, 0};
    /* Applying the Algorithm */
    int index;
    for (index = 0; index < size; index++)
    {
        if (key == arr[index])
        {
            if (found.first_found_index == -1)
                found.first_found_index = index;
            found.count++;
        }
    }
    return found;
}
