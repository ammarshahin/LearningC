/* The program is a C Program to Find the Length of a String
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <string.h>


int main(){ /* the program starts here */

/* declare variables used */
	char s[100];

/* Get the string from the user */
    printf("Enter the string: ");
    scanf("%[^\n]*c",s);
	printf("\n\n");

/* Find the Length of a String */
	printf("The Length of the String is: %d",strlen(s));

    return 0;
}
