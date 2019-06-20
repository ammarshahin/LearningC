/* The program is a C Program to Reverse a Number
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int n,rev; /* declare a variable */
    while(1){ /* to continuously inverse new numbers */
        printf("Enter a number : "); /* get the number from user */
        scanf("%d",&n);
        rev=0; /* reset for the new number */
        while(n!=0){
            rev*=10;
            rev=rev+n%10;
			n/=10;
        }
    printf("Reverse of entered number is = %d\n",rev);
    }
	return 0;
} /* the program Ends here */
