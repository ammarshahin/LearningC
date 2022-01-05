/*
        The program is a C Program to Access Elements of an Array Using Pointer
     Created by : ammar shahin
*/

#include <stdio.h>

int main()
{

    int *p, i, x[5]; /* declare variables used */

    p = x;   // save the address of the array in the pointer p

    for (i = 0; i < 5; i++)
    {
        printf("Enter x[%d]= ", i);   // scan the array element from the user
        scanf("%d", p + i);
    }

    system("cls");   // clear the screen

    for (i = 0; i < 5; i++)   // print the array
        printf("x[%d]= %d\n", i, *p + i);

    return 0;
}
