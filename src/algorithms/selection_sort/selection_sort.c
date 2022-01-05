/* The program is a C Program to Do the Selection Sort Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <stdlib.h>

/* Define the Macros used */
#define SIZE 13

int main()
{ /* the program starts here */

    /* The arrays(Only Use one) */
    //  int  arr[SIZE]={ 24654 ,2211 ,283 ,1154, 18, 18, 58 ,78 ,283, 156654 ,19500 ,645656654 ,4666546};

    //   int  arr[SIZE]={18  ,18 ,58, 78 ,283, 283 ,1154 ,2211 ,19500, 24654 ,156654 ,4666546,645656654};

    int arr[SIZE] = {645656654, 18, 24654, 78, 283, 283, 1154, 58, 19500, 24654, 156654, 4666546, 18};

    /* declare variables used */
    int i, j = SIZE - 1, temp, max, index;
    int c1 = 0, c2 = 0, c3 = 0;   // C1,c2, and C3 are debugging counters

    /* Displaying the results before sorting */
    printf("The array after sorting: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    /* Applying the Algorithm */
    do
    {
        max = arr[0];   // set the maximum value to the first element
        index = 0;
        c3 = 0;
        for (i = 0; i <= j; i++)
        {   // loop through the elements to cheek if there was a bigger value than max
            if (arr[i] > max)
            {
                max = arr[i];   // change the the max value to the new max
                index = i;
                c1++;   // increment the counter c1 which counts the total number of true cases cheeked
                c3++;   // increment the counter c3 which counts the true cases inside that particular do(j) loop
            }
            else if (arr[i] == max)
            {   // cheek whether there are elements equals the max to be counted with C1 and C3
                c1++;
                c3++;
            }
        }

        if (c3 == (j + 1))   // cheek whether the c3 equals the total number of current elements cheeked
            break;           // if it was true then break out of the loop as the array is already sorted

        /* Swap the maximum element with the top element in this iteration */
        temp = arr[index];
        arr[index] = arr[j];
        arr[j] = temp;

        c2++;   // increment the counter c2 which counts the total number of do loops and number of swaps
        j--;    // update the j
    } while (j > 0);

    /* Displaying the results after sorting */
    printf("The array after sorting: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    /* Displaying the debugging Variables */
    printf("\n\n");
    printf("C1= %d    C2= %d     C3= %d\n", c1, c2, c3);

    return 0;
}
