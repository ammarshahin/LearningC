/* The program is a C Program to Convert Binary to Octal and Octal to Binary
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <math.h>

void binaryToOctal();
void octalToBinary();

int main(){
    int op;
	while(1){
		printf("enter the operation to be done\n");
		printf("0 to convert Binary to Octal\n");
		printf("1 to convert Octal to Binary: ");
		scanf("%d",&op);
		switch(op){
			case 0:
				binaryToOctal();
				break;
			case 1:
				octalToBinary();
				break;
			default:
				printf("Not a valid operation\n");
		}
        printf("\n\n");
	}
    return 0;
}

/* Function to convert octal to binary */
void octalToBinary(){
    long long binary = 0;
	int octal=0,decimal = 0, i = 0;
	printf("Enter an octal number: ");
    scanf("%d", &octal);
    while(octal != 0){
        decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
    }
    i = 1;
    while (decimal != 0){
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
	printf("Its binary equivalent is = %lld \n",binary);
}

/* Function to convert binary to octal */
void binaryToOctal(){
	long long binary;
	int octal=0,decimal=0,i=0;
    printf("Enter a binary number(only 0s and 1s): ");
    scanf("%lld",&binary);
    while(binary != 0){
        decimal += (binary%10) * pow(2,i);
        ++i;
        binary/=10;
    }
    i = 1;
    while (decimal!=0){
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
	printf("Its octal equivalent is = %d \n",octal);
}
