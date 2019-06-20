/* The program is a C Program to Sort Elements of an Array(ascending)
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

    int i,j,temp,x[10];  /* declare variables used */

/* get the array element from the user */
	for(i=0;i<10;i++){
		printf("Enter the element x[%d]: ",i);
		scanf("%d",&x[i]);
	}

    printf("\n\n");

/* print the array before sorting */
    printf("the array elements(before sorting) are: \n");
	for(i=0;i<10;i++)
		printf("%d  ",x[i]);

/* sorting the array ascending */
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
			if(x[i]>x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}

    printf("\n\n");

/* print the array After sorting */
    printf("the array elements(After sorting) are: \n");
	for(i=0;i<10;i++){
		printf("%d  ",x[i]);
	}

    return 0;
}
