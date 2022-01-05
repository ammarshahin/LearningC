/* The program is a C Program to Copy a String
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <string.h>


int main(){ /* the program starts here */

/* declare variables used */
	char s[100],c[100];

/* Get the string from the user */
    printf("Enter the string: ");
    scanf("%[^\n]*c",s);

    printf("\n");

/* The current string in c */
	printf("The content of C before coping: %s",c);
	printf("\n\n");

/* Copy the string s into c */
    strcpy(c,s);

	printf("\n");

/* After coping */
    printf("The content of s is: %s\n",s);
	printf("The content of C is: %s\n",c);

    return 0;
}
