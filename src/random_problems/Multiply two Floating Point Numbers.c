/* The program is a C Program to Multiply two Floating Point Numbers
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  float x,y;  /* declare the variables */
	printf("Enter the value of x and y : "); /* print out a sentence */
	scanf("%f%f",&x,&y);                     /* get inputs from users */
	printf("The multiply value of the two numbers is: %.3f",x*y); /* print out the multiply value of the two floats*/
	return 0;
} /* the program Ends here */
