/* The program is a C Program Swap Numbers in Cyclic Order Using Call by Reference
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
void cycSwap(int*,int*,int*);
int main(){ /* the program starts here */

    int x,y,z;  /* declare variables used */

/* Get the values from the user */
	printf("Enter the three values(x , y , z): ");
	scanf("%d%d%d",&x,&y,&z);

/* Print the values before swapping */
	printf("the values before swapping: %d  %d  %d\n",x,y,z);

/* Call the function to swap the values and pass the addresses of the three variables */
	cycSwap(&x,&y,&z);

/* Print the values After swapping */
	printf("the values before swapping: %d  %d  %d\n",x,y,z);

	return 0;
}

void cycSwap(int*p1,int*p2,int*p3){
	int temp1,temp2; /* declare variables used */
	temp1=*p2; // temp1 = y
	temp2=*p3; // temp2 = z
	*p2=*p1;   //  y = x
	*p3=temp1; // z = temp1
	*p1=temp2; // x = temp2
}
