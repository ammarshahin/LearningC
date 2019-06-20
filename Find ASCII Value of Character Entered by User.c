/* The program is a C Program to Find ASCII Value of Character Entered by User
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
  char x;  /* declare a variable */
	printf("Enter the character : "); /* print out a sentence */
	scanf("%c",&x);                     /* get inputs from users */
	printf("The ASCII value of the Char %c is: %d\n",x,x); /* print the ASCII Value of the Character */
	return 0;
} /* the program Ends here */
