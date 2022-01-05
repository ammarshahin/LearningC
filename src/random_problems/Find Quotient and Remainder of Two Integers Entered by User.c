/* The program is a C Program to Find Quotient and Remainder of Two Integers Entered by User
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  int x,y;  /* declare the variables */
	printf("Enter the two integers: "); /* print out a sentence */
	scanf("%d%d",&x,&y);                /* get inputs from users */
	printf("The Quotient is: %d and the Remainder is : %d\n",x/y,x%y); /* print the Quotient and Remainder */
	return 0;
} /* the program Ends here */
