/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                                    */


#include <stdio.h>  /* include the header file containing function used */
//#include <string.h>
#include <stdlib.h>
#include "linkedLists.h"

int main(){ /* the program starts here */

/* declare variables used */
	int  choice,r=0,r2;
	struct node* Temp;

/* Call the initialization Function to initiate the Start and the end of the list */
    init_List();

/* print the list of choices */
	printf("1. Print the list.\n");
	printf("2. Insert an element.\n");
	printf("3. Append an element.\n");
	printf("4. replace an element.\n");
	printf("5. Delete an element.\n");
	printf("6. Free the List.\n");
	printf("7. Exit.\n");

	while(1){
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("The elements of the list: ");
                Temp = START;
				while(Temp!=NULL){
					printf("%d ",Temp->data);
                    Temp = Temp->next;
				}
				printf("\n");
				break;

			case 2:
				printf("Enter The element to insert: ");
				scanf("%d",&r);
				insert_Node(r);
				break;

			case 3:
				printf("Enter The element to append: ");
				scanf("%d",&r);
				append(r);
				break;

			case 4:
				printf("Enter The element that you want to replace : ");
				scanf("%d",&r);
				printf("Enter The Replacement: ");
				scanf("%d",&r2);
				replace_Node(r,r2);
				break;

			case 5:
			    printf("Enter The element to be deleted: ");
				scanf("%d",&r);
                delete_Node(r);
				break;

			case 6:
			    printf("Sure you want to Free the list(1 Or 0): ");
				scanf("%d",&r);
				r ? Free_List() : 0;
				break;

			case 7:
				exit(0);
				break;

			default:
				printf("Invalid Enter!!\n");
		}
		printf("\n");
	}
	return 0;
}
