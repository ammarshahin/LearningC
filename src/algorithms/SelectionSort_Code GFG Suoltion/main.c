// C program for implementation of selection sort
#include <stdio.h>
int     c1=0,c2=0;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;


    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx]){
            min_idx = j;
            c1++;
          }
        c2++;
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int  arr[13]={  645656654,18 ,24654, 78 ,283, 283 ,1154 ,58 ,19500, 24654 ,156654 ,4666546,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    /* Displaying the debugging Variables */
        printf("\n\n");
        printf("C1= %d    C2= %d\n",c1,c2);
    return 0;
}
