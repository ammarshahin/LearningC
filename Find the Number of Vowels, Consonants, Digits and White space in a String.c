/* The program is a C Program to Find the Number of Vowels, Consonants, Digits and White space in a String
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

/* declare variables used */
	char s[150];
    int i, vowels=0, consonants=0, digits=0, spaces=0;

/* Get the string from the user */
    printf("Enter the string: ");
    scanf("%[^\n]*c",s);

/* Find the Number of Vowels, Consonants, Digits and White space */
    for(i=0; s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
		   s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            ++vowels;
        }
        else if((s[i]>='a'&& s[i]<='z') ||
                (s[i]>='A'&& s[i]<='Z')){
            ++consonants;
        }
        else if(s[i]>='0' && s[i]<='9'){
            ++digits;
        }
        else if (s[i]==' '){
            ++spaces;
        }
    }

/* Print the Number of Vowels, Consonants, Digits and White space */
    printf("\n\nVowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    printf("Digits: %d\n",digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}
