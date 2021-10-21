/* The program is a C program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */
    float x,y,res; /* declare a variable */
	char op;
    while(1){
		printf("enter the operation: ");
		op = getche();
		printf("\n");
		printf("enter the two operands: ");
		scanf("%f%f",&x,&y);
		switch(op){
			case '+':
				res = x+y;
				break;
			case '-':
				res = x-y;
				break;
			case '*':
				res = x*y;
				break;
			case '/':
				res = x/y;
				break;
			default:
				printf("not a valid operation!\n");
				continue;
		}
		printf("%f %c %f = %f\n",x,op,y,res);
    }
    return 0;
} /* the program Ends here */
