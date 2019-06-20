/* The program is a C Program to Check Whether the Entered Year is Leap Year or not
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){  /* the program starts here */
	int year; /* declare a variable */
	while(1){ /* to continuously check for new years */
		printf("Enter a year: ");  /* print out a sentence */
		scanf("%d",&year);     /* get the year to check */
		if(year%4==0){
			if(year%100==0){
				if(year%400==0)
					printf("%d is a leap year.\n",year);
				else
					printf("%d is not a leap year.\n",year);
			}else
				printf("%d is a leap year.\n",year);
		}
		else
        printf("%d is not a leap year.\n",year);
	}
    return 0;
}
