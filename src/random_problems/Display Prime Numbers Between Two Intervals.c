/* The program is a C Program to Display Prime Numbers Between Two Intervals
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

void prime_Numbers(int,int); /* the prototype of the function prime_Numbers */

int main(){ /* the program starts here */
    int low,high; /* declare the variables */
    printf("Enter two numbers(intervals): "); /* get the upper and lower limits from the user */
    scanf("%d%d",&low,&high);
    prime_Numbers(low,high);  /* calling the prime_Numbers function */
    return 0;
}

void prime_Numbers(int low,int high){
    int i,flag; /* declare the variables */
    printf("Prime numbers between %d and %d are: ",low,high);
    while(low<high){
        flag=0;
        for(i=2;i<=low/2;++i){
            if(low%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0) printf("%d ",low);
        low++;
    }
}
