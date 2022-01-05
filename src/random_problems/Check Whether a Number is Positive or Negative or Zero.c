/* The program is a C Program to Check Whether a Number is Positive or Negative or Zero.
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int x; /* declare a variable */
	while(1){  /* to continuously check for numbers */
		printf("Enter the number : "); /* print out a sentence */
		scanf("%d",&x);             /* get the number from user */
		if(x%2) printf("%d is an odd number.\n",x); /* check whether the number has a reminder when divided by 2 */
		else printf("%d is an even number.\n",x);   /*if not divisible by 2 */
    }
	return 0;
} /* the program Ends here */
