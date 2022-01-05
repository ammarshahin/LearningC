/* The program is a C program to Display Factors of a Number
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
int main(){ /* the program starts here */
    int i,x; /* Declare the variables */
    while(1){ /* to continuously factorize more numbers */
        printf("Enter the number: "); /* get the value from the user */
        scanf("%d",&x);
        i=1; /* reset for the new number */
        printf("The factors of the number %d are: ",x);
        while(i<=x){
            if(x%i==0) printf("%d ",i);
            ++i;
        }
        printf("\n",i);
    }
    return 0;
} /* the program Ends here */
