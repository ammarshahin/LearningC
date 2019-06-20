/* The program is a C Program to convert Decimal to Hexadecimal Number and Vice Versa
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <string.h>
#include <conio.h>

long long hexToDec(char*,int);

int main(){ /* the program starts here */

/* declare variables used */
	char hex[17];
	char t;
    long long decimal, place=1;

    while(1){
            printf("Enter the type of conversion(h for hex and d for decimal): ");
            t= getche();
            printf("\n\n");
            if(t=='h'){
                /* Input hexadecimal number from user */
                printf("Enter any hexadecimal number: ");
                gets(hex);
                decimal = hexToDec(hex,strlen(hex));
                printf("Decimal number = %lld \n", decimal);
            }else if(t=='d'){
                printf("Enter any decimal number: ");
                scanf("%lld",&decimal);
                printf("Hexadecimal number = %x\n", decimal);
            }else {printf("invalid conversion !! \n\n");}
    }
    return 0;
}

/* Function To Convert hex to decimal*/

long long hexToDec(char* hex,int len){

/* declare variables used */
        int i = 0, val;
        long long decimal=0;

    /* Iterate over each hex digit */
    for(i=0; hex[i]!='\0'; i++)
    {

        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    return decimal;
}
