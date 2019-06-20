/* The program is a C Program to Find Factorial of a Number
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
    int i,n,fac=1; /* declare a variable */
	while(1){
		printf("enter a number: ");
		scanf("%d",&n);
		i=1;
		fac=1;
		while(i<=n) fac*=i++;
		printf("The Factorial of the number %d is: %d\n",n,fac);
	}
	return 0;
} /* the program Ends here */
