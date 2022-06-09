#ifndef __LINEAR_SEARCH_
#define __LINEAR_SEARCH_

typedef struct
{
    int first_found_index;
    int count;

} foundStr;

extern foundStr linear_search(const int *arr, const int size, const int key);

#endif