/* The program is a C Program to Find the Largest Number Among Three Numbers Entered by User
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
    int i;
	float x,max=0;  /* declare a variable */
	for(i=1;i<4;i++){
		printf("Enter the %d number : ",i); /* print out a sentence */
		scanf("%f",&x);             /* get the number from user */
		if(x>max) max=x;
    }
	printf("the largest number is: %f\n",max); /* print out a sentence */
	return 0;
} /* the program Ends here */
