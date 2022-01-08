/* C program to implement The Stack */
#include <stdio.h>

#define SIZE 100

int main(){

/* Declare the Variables Used */ 
    int i,choice,data;
	int stack[SIZE]={0}; // Create a stack with capacity of 100 elements
	int top = 0; // Initially stack is empty 

	 /* Menu */
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
		printf("3. Display the Stack\n");
        printf("4. Size of the stack\n");
        printf("5. Exit\n\n");

    while(1){

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                if (top >= SIZE)  // Check stack overflow
                    printf("Stack Overflow, can't add more element element to stack.\n");
                stack[top++] = data; // Push element in stack
                break;
            case 2:
                if (top < 0) // Check stack underflow
					printf("Stack is empty.\n");
				else{
                    printf("Data => %d is erased!\n",stack[top-1]);
                    top--;
                    }
                break;
			case 3:
                printf("The current Stack Content: ");
				for(i=0;i<top;i++)
					printf("%d ",stack[i]);
				break;
			case 4:
                printf("Stack size is: %d Bytes With %d of elements\n",top*sizeof(int),top);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!!\n");
        }

        printf("\n\n");
    }
    return 0;
}
