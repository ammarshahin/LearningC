#ifndef __BINARY_SEARCH_
#define __BINARY_SEARCH_

typedef struct
{
    int first_found_index;
    int count;

} foundStr;

extern foundStr binary_search(const int *arr, const int size, const int key);

#endif