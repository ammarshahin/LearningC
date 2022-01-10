// C program to detect and remove loop in linked list
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

/* Function to remove loop. Used by detectAndRemoveLoop() */
void removeLoop(Node *, Node *);

/* This function detects and removes loop in the list
If loop was there in the list then it returns 1,
otherwise returns 0 */
int detectAndRemoveLoop(Node *list)
{
    Node *slow_p = list, *fast_p = list;

    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        /* If slow_p and fast_p meet at some point then there is a loop */
        if (slow_p == fast_p)
        {
            removeLoop(slow_p, list);

            /* Return 1 to indicate that loop is found */
            return 1;
        }
    }

    /* Return 0 to indicates that ther is no loop*/
    return 0;
}

/* Function to remove loop.
loop_node --> Pointer to one of the loop nodes
head --> Pointer to the start node of the linked list */
void removeLoop(Node *loop_node, Node *head)
{
    Node *ptr1 = head;
    Node *ptr2 = loop_node;

    while (ptr2->next != ptr1)
    {
        if (ptr2->next == loop_node)
            ptr1 = ptr1->next;

        ptr2 = ptr2->next;
    }
    /* After the end of loop ptr2 is the last node of the loop. So
    make next of ptr2 as NULL */
    ptr2->next = NULL;
}

/* Function to print linked list */
void printList(Node *node)
{
    while (node)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

Node *newNode(int key)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}

/* Drier program to test above function*/
int main()
{
    Node *head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    detectAndRemoveLoop(head);

    printf("Linked List after removing loop \n");
    printList(head);
    return 0;
}
