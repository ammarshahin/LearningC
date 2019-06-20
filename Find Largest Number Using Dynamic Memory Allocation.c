/* The program is a C Program to Find Largest Number Using Dynamic Memory Allocation
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

/* declare variables used */
	int i,num;
    float *data;
/* get the number of elements */
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d",&num);

/* Allocates the memory */
    data = (float*) calloc(num, sizeof(float));

    if(data == NULL){
        printf("Not enough memory!!!");
        exit(0);
    }

/* Get the values of the elements from the user */
    for(i = 0; i < num; ++i){
       printf("data[%d]= ",i);
       scanf("%f",data+i);
    }

/* Find the largest number */
    for(i=1;i<num;++i) // start the loop from i=1 to save the first check
       if(*data < *(data+i))
           *data = *(data+i);

/* print the largest number */
    printf("Largest element = %.2f",*data);

    return 0;
}
