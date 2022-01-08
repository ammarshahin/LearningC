/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                               */
#include <stdio.h>
#include <stdlib.h>
#include "linkedLists.h"

void init_List(){
	START = NULL; // set the Start pointer to point at nothing as the list is empty
	END = NULL;   // set the End pointer to point at nothing as the list is empty
}



/* Function to Dynamically allocate memory in the Heap and return the pointer points to this space                                                         */
struct node* create_Node(){
	return ((struct node*) malloc(sizeof(struct node)));
}
/* Note: we should always cheek the return pointer as it may be NULL if there was not enough memory in the heap                                              */



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
