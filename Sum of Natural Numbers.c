/* The program is a C Program to Find Sum of Natural Numbers(to a limit number entered by the user)
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int n,sum=0,i=0; /* declare a variable */
	printf("Set the limit number: ");
	scanf("%d",&n);
	while(i<=n) sum+=i++;
	printf("The sum of Natural Numbers from 1 to %d is: %d",n,sum);
	return 0;
} /* the program Ends here */
