/* The program is a C Program to Convert Octal to Decimal and Decimal to Octal
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

void decimalToOctal();
void octalToDecimal();

int main(){
    int op;
	while(1){
		printf("enter the operation to be done\n");
		printf("0 to convert Decimal to Octal\n");
		printf("1 to convert Octal to decimal: ");
		scanf("%d",&op);
		switch(op){
			case 0:
				decimalToOctal();
				break;
			case 1:
				octalToDecimal();
				break;
			default:
				printf("Not a valid operation\n");
		}
        printf("\n\n");
	}
    return 0;
}

/* Function to convert Decimal to octal */
void decimalToOctal(){
	int decimal,octal=0,i=1;
	printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    while (decimal!=0){
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
	printf("Its octal equivalent is = %d \n",octal);
}

/* Function to convert octal to decimal */
void octalToDecimal(){
	int octal,decimal=0,i=0;
	printf("Enter an octal number: ");
    scanf("%d",&octal);
    while(octal!=0){
        decimal+=(octal%10)*pow(8,i);
        ++i;
        octal/=10;
    }
	printf("Its decimal equivalent is = %d \n",decimal);
}
