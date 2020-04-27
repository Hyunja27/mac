#include <stdio.h>
#include <stdlib.h>
typedef struct node_
{
    int data;
    struct node_ * next;
}Node;
typedef struct list_
{
    struct node_ * cur;
    struct node_ * head;
    struct node_ * tail;
    struct node_ * before;
    int numofdata;
}List;
void listinit(List * L)
{
    L->cur = NULL;
    L->head = NULL;
    L->tail = NULL;
    L->before = NULL;
    int numofdata = 0;
}
void makelist(List * L,int N)
{
    Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->data  = N;
    newnode->next  = NULL;
    if (L->tail == NULL)
    {
	L->tail = newnode;
	L->cur = newnode;
    }
    else
    {
	L->head->next = newnode;
    }
    L->cur = newnode;
    L->head = newnode;
    L->numofdata++;
}
void datainsert(List * L,int N)
{
    Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->data = N;
    L->cur = L->tail;
    while(1)
    {	
	if (L->cur->next->data > N && L->cur->data < N)
	{
	    newnode->next = L->cur->next;
	    L->cur->next = newnode;
	    break;
	}
	else if (L->head->data < N)
	{
	    L->head->next = newnode;
	    L->head = newnode;
	    break;
	}
	else if (L->tail->data > N)
	{
	    newnode->next = L->tail;
	    L->tail = newnode;
	    break;
	}
	else
	    L->cur = L->cur->next;
    }
}
void printlist(List * L)
{
    L->cur = L->tail;
    while(1)
    {
	if (L->cur != NULL)
	{
	    printf("[%d]\n",L->cur->data);
	    L->cur = L->cur->next;
	} 
	else 
	{
	    puts("\nAll Data Printed!\n");
	    break;
	}
    }
}
void deletenlist(List * L,int N)
{
    Node *D;
    L->cur = L->tail;
    while(1)
    {
	if (L->cur->next->data != N )
	{
	    L->cur = L->cur->next;
	} 
	else
	{ 
	    printf("\n=delete  %d ==\n",L->cur->next->data);
	    D = L->cur->next; 
	    L->cur->next = L->cur->next->next;
	    free(D);
	    break;
	}
    }
}
int main(void)
{
    List * L = (List *)malloc(sizeof(List));
    listinit(L); 
    makelist(L,1);
    makelist(L,4);
    makelist(L,5);
    makelist(L,6);
    makelist(L,8);
    makelist(L,10);
    makelist(L,17);
    makelist(L,18);
    makelist(L,19);
    makelist(L,30);
    printlist(L);
    datainsert(L,2);
    datainsert(L,14);
    datainsert(L,33);
    datainsert(L,-4);
    deletenlist(L,17);
    printlist(L);
}
