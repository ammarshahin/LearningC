/* The program is a C Program to Find Largest Element of an Array
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
	int i,j,max=0,x[10]; /* declare variables used */
	for(i=0;i<10;i++){   /* loop through the array elements to scan them */
		printf("enter the value of the %d element: ",i);
		scanf("%d",&x[i]);
		if(x[i]>max){ /* check every element and compare it with the previous maximum value */
			max=x[i];
			j=i; /* save the index of the max element */
		}
	}
	printf("the maximum number is %d which is the x[%d] element\n",max,j);
    return 0;
}
