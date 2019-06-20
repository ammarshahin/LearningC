/* The program is a C program to Calculate the Power of a Number Using Recursion
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
int calcPower(int,int);
int main(){
    int n,p;
    while(1){
        printf("Enter the number: ");
        scanf("%d", &n);
        printf("Enter the power: ");
        scanf("%d", &p);
        printf("the %d ^ %d = %d\n",n,p,calcPower(n,p));
    }
    return 0;
}

/* Function to reverse a sentence entered by user */
int calcPower(int n,int p){
    if(p>1)
		return n*calcPower(n,p-1);
}
