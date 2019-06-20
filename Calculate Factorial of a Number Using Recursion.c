/* The program is a C program to Calculate Factorial of a Number Using Recursion.
   as factorial of n is n*(n-1)*(n-2)*.....*3*2*1
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
unsigned int factorial(unsigned int);
int main(){
    unsigned int n;
    while(1){
        printf("Enter any positive integer(Up to 17 only): "); /* more than 17 will be variable over flow */
        scanf("%u",&n);
        printf("the Factorial for the numbers %u is: %u\n",n,factorial(n));
    }
    return 0;
}

/* Function to get the factorial of a number */
unsigned int factorial(unsigned int n){
    if(n>1)
        return n*factorial(n-1);
}
