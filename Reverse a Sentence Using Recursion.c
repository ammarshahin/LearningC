/* The program is a C program to Reverse a Sentence Using Recursion.
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
void reverseSentence();
int main(){
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

/* Function to reverse a sentence entered by user */
void reverseSentence(){
    char c;
    scanf("%c", &c);
    if(c!='\n'){
        reverseSentence();
        printf("%c",c);
    }
}
