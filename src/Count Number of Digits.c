/* The program is a C Program to Count Number of Digits of an Integer
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main()
{ /* the program starts here */
    int n,dig; /* declare a variable */
    while(1){ /* to continuously check for numbers */
        printf("Enter a number : "); /* get the number from user */
        scanf("%d",&n);
        dig=0; /* to reset the counter for the new numbers */
        while(n!=0){
            n=n/10;         /* divide by 10 to reduce the no of digits by 1 */
            dig++;
        }
        printf("the total digits number is %d\n",dig);
    }
	return 0;
} /* the program Ends here */
