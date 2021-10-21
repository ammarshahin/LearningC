/* The program is a C Program to Find the frequency of Characters in a string
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

/* declare variables used */
	char s[100],ch;
	int i, freq = 0;

/* Get the string from the user */
	printf("Enter a string: ");
	scanf("%[^\n]*c",s);

/* Refresh the scanner  */
    _flushall();

/* Get the char from the user */
	printf("Enter a character to find the freq: ");
	scanf("%c",&ch);
/* calculate the frequency of the character */
	for(i=0;s[i] != '\0';++i)
       if(ch == s[i])
           freq++;

/* print the frequency of the character */
	printf("freq of %c = %d", ch, freq);

    return 0;
}
