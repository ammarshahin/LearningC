/* The program is a C program to Calculate the Power of a Number
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int i,x,pow,result; /* declare a variable */
    while(1){ /* to continuously check for numbers */
        printf("Enter a number and the power: "); /* get the number from user */
        scanf("%d%d",&x,&pow);
        result=1; /* reset for the new number */
        for(i=0;i<pow;i++){
			result*=x;
        }
    printf("the %d ^ %d is = %d\n",x,pow,result);
    }
	return 0;
} /* the program Ends here */
