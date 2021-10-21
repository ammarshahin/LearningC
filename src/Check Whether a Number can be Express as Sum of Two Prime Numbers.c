/* The program is a C program to Check Whether a Number can be Express as Sum of Two Prime Numbers
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
int checkPrime(int n);
int main(){
    int n,i,flag;
    while(1){
    flag=0;
    printf("Enter any positive integer to check: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;++i){
        if(checkPrime(i)==1){         /* condition for i to be a prime number */
            if(checkPrime(n-i)==1){   /* condition for n-i to be a prime number */
                printf("%d = %d + %d\n",n,i,n-i);    /* n = primeNumber1 + primeNumber2 */
                flag=1;
            }

        }
    }
    if(flag==0)
        printf("%d cannot be expressed as the sum of two prime numbers!\n",n);
    }
    return 0;
}
/* Function to check prime number */
int checkPrime(int n){
    int i,isPrime=1;
    for(i=2;i<=n/2;++i){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;
}
