#include <stdio.h>

#define MAXSTACK 5

typedef struct stack{
	int top;
	int entry[MAXSTACK];
}Stack;

void createStack(Stack*);
void push(int,Stack*);
void pop(Stack*);
int stackFull(Stack);
int stackEmpty(Stack);


int main(){

	Stack s;
	int e,choice,i;
	createStack(&s);

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
				if(stackFull(s)){
					printf("Enter the value to push(%d remaining):  ",MAXSTACK - s.top);
					scanf("%d",&e);
					push(e,&s);
				}else
					printf("The Stack is full !!!");
                break;

            case 2:
                if (stackEmpty(s)) // Check stack underflow
					printf("Stack is empty !!!\n");
				else
					pop(&s);
                break;

			case 3:
                printf("The current Stack Content: ");
				for(i=0;i<s.top;i++)
					printf("%d ",s.entry[i]);
				break;

			case 4:
                printf("Stack size is: %d Bytes With %d of elements\n",s.top*sizeof(int),s.top);
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



void createStack(Stack *ps){
	ps->top = 0;
}


void push(int e,Stack* ps){
	ps->entry[ps->top++] = e;
}



void pop(Stack* ps){
	printf("Data => %d is erased!\n",ps->entry[ps->top-1]);
	ps->top--;
}



int stackFull(Stack s){
	if(s.top < MAXSTACK)
		return 1;
	else
		return 0;
}




int stackEmpty(Stack s){
	if(s.top <= 0)
		return 1;
	else
		return 0;
}
