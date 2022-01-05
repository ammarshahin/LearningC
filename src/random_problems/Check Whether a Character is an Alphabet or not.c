/* The program is a C Program to Checker Whether a Character is an Alphabet or not
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <conio.h>
int main(){ /* the program starts here */
    char ch; /* declare a variable */
	while(1){  /* to continuously check for new characters*/
		printf("Enter any character: \n");     /* enter the character from user */
		ch = getch(); /* to store the entered character into ch */
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
			printf("The entered character %c is an Alphabet.\n",ch);
		}else{
			printf("The entered character %c is not an Alphabet.\n",ch);
		 }
    }
	return 0;
} /* the program Ends here */
