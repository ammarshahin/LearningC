/* The program is a C Program to Swap Two numbers Entered by User
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  int x,y,temp;  /* declare the variables */
	printf("Enter the x value: "); /* print out a sentence */
	scanf("%d",&x);             /* get the two numbers from users */
	printf("Enter the y value: "); /* print out a sentence */
	scanf("%d",&y);             /* get the two numbers from users */
	temp =x;                  /* store the value of x in a temporary variable temp */
	x=y;                      /* swap the value of y to x */
	y=temp;                   /* get the value of temp into y */
	printf("The new value of x is: %d\nthe new value of y is: %d\n",x,y); /* print out the swapped values */
	return 0;
} /* the program Ends here */
