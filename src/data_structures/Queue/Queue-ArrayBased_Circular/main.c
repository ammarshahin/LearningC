/* Queue implementation - Array Based -
	created by: ammar shahin
	data: 3/9/2019                         */

#include <stdio.h>
#include <stdlib.h>

#define MAXQUEUE 5

typedef struct queue{
	int front;
	int rear;
	int size;
	int entry[MAXQUEUE];
}Queue;

void createQueue(Queue*);
void clearQueue(Queue*);
int queueFull(Queue*);
int queueSize(Queue*);
int queueEmpty(Queue*);
void serve(Queue*);
void append(int,Queue*);
void display(Queue*);


int main(){

	Queue s;
	int e,choice,i;
	createQueue(&s);

		 /* Menu */
        printf("1. Push Data\n");
        printf("2. Pop Data\n");
		printf("3. Clear the queue\n");
		printf("4. Display the queue\n");
        printf("5. Size of the queue\n");
        printf("6. Exit\n\n");

    while(1){

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
				if(!queueFull(&s)){
					printf("Enter the value to push: ");
					scanf("%d",&e);
					append(e,&s);
				}else
					printf("The queue is full !!!");
                break;

            case 2:
                if (queueEmpty(&s)) // Check queue underflow
					printf("queue is empty !!!\n");
				else
					serve(&s);
                break;
            case 3:
                clearQueue(&s);
				break;

			case 4:
                display(&s);
				break;

			case 5:
                printf("queue size is: %d of elements\n",s.size);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!!\n");
        }

        printf("\n\n");
    }
    return 0;
}



void createQueue(Queue* pq){
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}


void append(int data,Queue* pq){

	if(pq->rear == MAXQUEUE-1)
		pq->rear = 0;
	else
		pq->rear++;

	pq->entry[pq->rear] = data;
	pq->size++;
}


void serve(Queue* pq){
	if(pq->front == MAXQUEUE-1)
		pq->front = 0;
	else{
        printf("The element %d is erased",pq->entry[pq->front]);
		pq->front++;
	}
	pq->size--;
}


int queueEmpty(Queue* pq){
	return !pq->size;
}


int queueFull(Queue* pq){
	return (pq->size == MAXQUEUE);
}


int queueSize(Queue* pq){
	return pq->size;
}


void clearQueue(Queue* pq){

	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}


void display(Queue* pq){
	int i,c = pq->front;
	printf("The Queue Content is: ");

	for(i = 0; i < (pq->size) ; i++){
        if(c <= MAXQUEUE-1){
            printf("%d ",pq->entry[c]);
            c++;
        }else
            break;
	}

	if(pq->size && (pq->rear < pq->front)){
		for(i = 0; i <= pq->rear; i++)
		printf("%d ", pq->entry[i]);
	}
}
