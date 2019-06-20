/* The program is a C Program to Add Two Integers Entered by User
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  int x,y;  /* declare the variables */
	printf("Enter the value of x and y : "); /* print out a sentence */
	scanf("%d%d",&x,&y);                     /* get inputs from users */
	printf("The sum of the two numbers is: %d\n",x+y); /* print out the sum of the two integers*/
	return 0;
} /* the program Ends here */
