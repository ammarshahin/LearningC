/* The program is a C Program to Reverse a String by Passing it to Function
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <string.h>

void revString(char*,int); // the prototype of the function

int main(){ /* the program starts here */

/* declare variables used */
	char s[100];

/* Get the string from the user */
    printf("Enter the string: ");
    scanf("%[^\n]*c",s);

	printf("\n\n");

/* Call the function that reverse(and prints it) the string and passing the array name */
	revString(s,strlen(s));

    return 0;
}

void revString(char* p,int l){

/* declare variables used */
	int begin,end;
	char r[100];

	end = l - 1;

/* reverse the char */
	for (begin = 0; begin < l; begin++){
      r[begin] = p[end];
      end--;
	}

	r[begin] = '\0';
	printf("%s\n", r);
}
