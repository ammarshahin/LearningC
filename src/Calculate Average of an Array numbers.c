/* The program is a C Program to Calculate Average of an Array numbers
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
	int i,sum=0,x[100]; /* declare variables used */
	for(i=0;i<10;i++){ /* loop through the array elements to scan them */
		printf("enter the value of the %d element: ",i);
		scanf("%d",&x[i]);
		sum += x[i]; /* sum all the elements values */
        printf("the average of the array with %d elements is: %.2f\n\n",i+1,(float)sum/10);
	}
    return 0;
}
