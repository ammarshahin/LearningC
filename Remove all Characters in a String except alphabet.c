/* The program is a C Program to Remove all Characters in a String except alphabet
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <string.h>

int main(){ /* the program starts here */

/* declare variables used */
	char s[100];
	int i,j;

/* Get the string from the user */
    printf("Enter the string: ");
    scanf("%s",s);
	printf("\n\n");
/* Sort the variables that are alphabet only */
	for(i=0;i<strlen(s);i++){
		if( s[i] < 'A' || s[i] > 'z' || (s[i] > 'Z' && s[i] < 'a')){
            for(j=i;j<strlen(s);j++){
			s[j]=s[j+1];
            }
        i-=1;
		}
	}
    printf("the string(With only alphabet): %s",s);

    return 0;
}
