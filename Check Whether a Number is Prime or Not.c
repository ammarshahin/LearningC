/* The program is a C Program to Check Whether a Number is Prime or Not
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int num,i,flag; /* declare a variable */
    while(1){ /* to continuously check new numbers */
        printf("Enter a number: "); /* get the number from user */
        scanf("%d",&num);
        flag=0;     /* reset for the new number */
		for(i=2;i<=num/2;i++){
			if ((num%i)==0){
                flag = 1;
                break;     /*to prevent unnecessary additional checks */
			}
		}
		if (flag==0) printf("%d is a prime number \n", num);
		else printf("%d is not a prime number \n", num);
    }
	return 0;
} /* the program Ends here */
