/* The program is a C Program to Convert Binary Number to Decimal and Decimal to Binary
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

void decimalToBinary();
void binaryTodecimal();

int main(){
    int op;
	while(1){
		printf("enter the operation to be done\n");
		printf("0 : convert Decimal to binary\n");
		printf("1 : convert binary to decimal\n");
		printf("Operation : ");
		scanf("%d",&op);
		switch(op){
			case 0:
				decimalToBinary();
				break;
			case 1:
				binaryTodecimal();
				break;
			default:
				printf("Not a valid operation\n");
		}
		printf("\n\n");
	}
    return 0;
}

/* Function to convert Decimal to binary */
void decimalToBinary(){
    int decimal,binary=0,base=31;
    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);
    printf("Its binary equivalent is=  ");

    while(base >= 0){
    binary=decimal>>base--;
    if(binary&1)
      printf("1");
    else
      printf("0");
    }
    printf("\n");
}

/* Function to convert binary to decimal */
void binaryTodecimal(){
	long long binary;
	int  decimal=0,base=1,rem;
    printf("Enter a binary number(1s and 0s only) \n");
    scanf("%lld",&binary);
    while (binary > 0){
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10 ;
        base=base*2;
    }
    printf("Its decimal equivalent is = %d \n",decimal);
}
