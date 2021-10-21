/* The program is a C program to Find Sum of Natural Numbers using Recursion.
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
int sumOfNaturalNo(int);
int main(){
    int n;
    while(1){
    printf("Enter any positive integer to sum to(the upper limit): ");
    scanf("%d",&n);
    printf("the sum of the natural numbers from 0 to %d is: %d\n",n,sumOfNaturalNo(n));
    }
    return 0;
}

/* Function to calculate the sum of the natural numbers from 0 to n */
int sumOfNaturalNo(int n){
    if(n>0)
        return n+sumOfNaturalNo(n-1);
}
