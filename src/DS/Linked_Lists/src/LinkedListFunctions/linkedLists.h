/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                                    */


#ifndef LINKEDLISTS_H_INCLUDED
#define LINKEDLISTS_H_INCLUDED


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

#endif // LINKEDLISTS_H_INCLUDED
