/* The program is a C program to Generate Multiplication Table(to 12*12)
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    int i,j; /* declare a variable */
    for(i=1;i<13;i++){
        printf("the Multiplication table of <%d>\n",i);
        for(j=1;j<13;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
	return 0;
} /* the program Ends here */
