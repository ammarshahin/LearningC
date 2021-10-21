/* The program is a C Program to Display Prime Numbers Between Two Intervals
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
int main(){ /* the program starts here */
    int i,low,high,flag; /* declare the variables */
    printf("Enter two numbers(intervals): ");
    scanf("%d%d",&low,&high);
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
    return 0;
}
