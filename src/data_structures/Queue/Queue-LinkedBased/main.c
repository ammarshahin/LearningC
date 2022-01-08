/* Queue implementation - Linked Based.
	created by: ammar shahin
	data: 3/9/2019                         */

#include <stdio.h>
#include <stdlib.h>

#define MAXQUEUE 5

typedef struct queueNode{
	int entry;
	struct queueNode* next;
}QueueNode;

typedef struct queue{
	QueueNode* front;
	QueueNode* rear;
	int size;
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
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}


void append(int data,Queue* pq){
	QueueNode* temp = (QueueNode*) malloc(sizeof(QueueNode));
	temp->next = NULL;
	temp->entry = data;

	if(!pq->rear)
		pq->front = temp;
	else
		pq->rear->next = temp;

	pq->rear = temp;
	pq->size++;
}


void serve(Queue* pq){

	if(pq->size){
		QueueNode* temp = pq->front;
		pq->front = temp->next;
		printf("The element %d is erased",temp->entry);
		free(temp);
		if(pq->front == NULL)
			pq->rear = NULL;

		pq->size--;
	}
}


int queueEmpty(Queue* pq){
	return !pq->size;
}


int queueFull(Queue* pq){
	return 0;
}


int queueSize(Queue* pq){
	return pq->size;
}


void clearQueue(Queue* pq){
	while(pq->front){
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size = 0;
}


void display(Queue* pq){

	QueueNode* temp = pq->front;

	printf("The Queue Content is: ");

	while(temp != NULL){
        printf("%d ",temp->entry);
		temp = temp->next;
	}
}
