/* The program is a C Program to Implement the Linked List Functions
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node* START;
struct node* END;

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

void init_List();
struct node* create_Node();
void append(int);
void insert_Node(int);
struct node* search_Node(int);
int delete_Node(int);
void Free_List();
void replace_Node(int,int);

int main(){ /* the program starts here */

/* declare variables used */
	int  choice,r=0,r2,c;
	struct node* Temp;

/* Call the initialization Function to initiate the Start and the end of the list */
    init_List();

/* print the list of choices */
	printf("1. Print the list.\n");
	printf("2. No of elements.\n");	
	printf("3. Insert an element to the list.\n");
	printf("4. Append an element to the list.\n");
	printf("5. replace an element value.\n");
	printf("6. Delete an element from the list.\n");
	printf("7. Free the List.\n");
	printf("8. Exit.\n");

	while(1){
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("The elements the list: ");
                Temp = START;
				while(Temp!=NULL){
					printf("%d ",Temp->data);
                    Temp = Temp->next;
				}
				printf("\n");
				break;

			case 2:
                Temp = START;
				c = 0;
				while(Temp!=NULL){
					c++;
                    Temp = Temp->next;
				}
				printf("The Number of elements is: %d\n",c);
				break;

			case 3:
				printf("Enter The element to insert in the list: ");
				scanf("%d",&r);
				insert_Node(r);
				break;

			case 4:
				printf("Enter The element to append from the list: ");
				scanf("%d",&r);
				append(r);
				break;

			case 5:
				printf("Enter The element to be replaced from the list: ");
				scanf("%d",&r);
				printf("Enter The Replacement: ");
				scanf("%d",&r2);
				replace_Node(r,r2);
				break;

			case 6:
			    printf("Enter The element to be deleted from the list: ");
				scanf("%d",&r);
                delete_Node(r);
				break;

			case 7:
			    printf("Sure you want to Free the list(1 Or 0): ");
				scanf("%d",&r);
				if(r)
					Free_List();
				break;

			case 8:
				exit(0);
				break;

			default:
				printf("Invalid Enter!!\n");
		}
		printf("\n");
	}
	return 0;
}


void init_List(){
	START = NULL; // set the Start pointer to point at nothing as the list is empty
	END = NULL;   // set the End pointer to point at nothing as the list is empty
}



/* Function to Dynamically allocate memory in the Heap and return the pointer points to this space                                                         */
struct node* create_Node(){
	return ((struct node*) malloc(sizeof(struct node)));
}
/* Note: we should always cheek the return pointer as it may be NULL if there wasn't enough memory in the heap                                              */



/* the Insert Function receives the data to be inserted____ and don't return any thing */
void insert_Node(int Data){
	struct node* element = create_Node();
	element->data = Data;
    struct node* temp;
    temp = START;
	if((START == NULL)&&(END == NULL)){    // the list is empty
		append(Data);
	}else{
		while((temp!=NULL)&&(temp->data < element->data)){    // To insert the data in the right order (sorted order)
			temp = temp->next;
		}
		if(temp==NULL){  // the data entered is the largest in list and will be inserted in the End
			append(Data);     // Call Append and set the data in the end
		}else if(temp==START){  // the data entered is the Smallest in list and will be inserted at the Start
			element->next =START;
			element->prev = NULL;
			START->prev = element;
			START = element;
		}else{        // the data entered is in the middle in list and will be inserted in the Middle
			element->next =temp;
			element->prev =temp->prev;
			temp->prev->next = element;
			temp->prev = element;
		}
	}
}


/* the Append Function receives the data to be Added in the last Spot ____ and don't return any thing */
void append(int Data){
    struct node* element = create_Node();
	element->data = Data;

	if((START == NULL)&&(END == NULL)){    // the list is empty___ and this is will be the first element
		START = element;
		END = element;
		element->prev = NULL;
		element->next = NULL;
	}else{                      // the list in Not_Empty and the element will be inserted in the End
		END->next = element;
		element->prev = END;
		END = element;
		element->next = NULL;
	}
}



/*the Replace Function receives the data to be replaced and the replacement data___and don't return any thing*/
void replace_Node(int data1,int data2){
    struct node* temp = search_Node(data1);

	if(temp == NULL){    // the search function didn't find the replaced data
		printf("data not found!!");
	}else{               // Found
		temp->data = data2;
	}
}


/* Function that deletes a certain node.
It receives the data, returns 1 if the data was found and deleted and, returns 0 if the data wasn't found  */
int delete_Node(int d){
    struct node* temp;
	temp = search_Node(d); // call the search_Node function to get the Node address
	if(temp==NULL)  // the Node wasn't found ______ OR the List is empty
		return 0;
	if((START==END)&&(START!=NULL)){   // the Data is at First and it's the only element in the List
		START = NULL;  // reset the list to be empty
		END = NULL;
		free(temp);
		return 1;
	}else if(temp == START){   // the Data is at First But not the only element in the List
		START = START->next;  // Make the next element the first One
		START->prev = NULL;
		free(temp);
		return 1;
	}else if(temp == END){    // the Data is at the End of the List
		END = temp->prev;
		END->next = NULL;
		free(temp);
		return 1;
	}else{                      // the Data is at The Middle
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return 1;
	}
}



/* Function to Search for the Node ____ Take data and return the address of the element */
struct node* search_Node(int d){
	struct node* temp;
	temp = START;
	while((temp!=NULL)&&(temp->data!=d)){ // Loop through all the elements until the element is Found
		temp = temp->next;
	}
	return temp;
}


/* clear all elements in the List */
void Free_List(){
    struct node* temp = START;   // temp is now pointing to the first element
	while(temp!= NULL){         // Loop through all the elements
		START = START->next;   // Make the next element the first One
		free(temp);           // free the pointing to element
		temp = START;        // temp is now pointing to the Next element
	}
	init_List();           // Re-initiate the list
}
