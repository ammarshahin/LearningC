/* The program is a C Program to Check Whether a Number is Even or Odd
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  int x;  /* declare a variable */
  printf("Enter the number to be cheeked(0 to exit): "); /* print out a sentence */
	scanf("%d",&x);             /* get the number from user */
  while(x){
	if(x%2) printf("The value of x is odd\n"); /* print out a sentence */
	else    printf("The value of x is even\n"); /* print out a sentence */
	printf("Enter the number to be cheeked(0 to exit): "); /* print out a sentence */
	scanf("%d",&x);             /* get the number from user */
    }
	return 0;
} /* the program Ends here */
