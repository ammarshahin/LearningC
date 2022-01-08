#include <stdio.h>

#define SIZE 5

typedef struct queue{
	int top;
	int entry[SIZE];
}Queue;

void createQueue(Queue*);
void push(int,Queue*);
void pop(Queue*);
int queueFull(Queue);
int queueEmpty(Queue);


int main(){

	Queue s;
	int e,choice,i;
	createQueue(&s);

		 /* Menu */
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
		printf("3. Display the queue\n");
        printf("4. Size of the queue\n");
        printf("5. Exit\n\n");

    while(1){

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
				if(queueFull(s)){
					printf("Enter the value to push(%d remaining):  ",SIZE - s.top);
					scanf("%d",&e);
					push(e,&s);
				}else
					printf("The queue is full !!!");
                break;

            case 2:
                if (queueEmpty(s)) // Check queue underflow
					printf("queue is empty !!!\n");
				else
					pop(&s);
                break;

			case 3:
                printf("The current queue Content: ");
				for(i=0;i<s.top;i++)
					printf("%d ",s.entry[i]);
				break;

			case 4:
                printf("queue size is: %d Bytes With %d of elements\n",s.top*sizeof(int),s.top);
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



void createQueue(Queue *ps){
	ps->top = 0;
}


void push(int e,Queue* ps){
	ps->entry[ps->top++] = e;
}


void pop(Queue* ps){
	int i;
	printf("Data => %d is erased!\n",ps->entry[0]);
	for(i=0;i<ps->top;i++){
		ps->entry[i] = ps->entry[i+1];
	}
	ps->top--;
}


int queueFull(Queue s){
	if(s.top < SIZE)
		return 1;
	else
		return 0;
}


int queueEmpty(Queue s){
	if(s.top <= 0)
		return 1;
	else
		return 0;
}
