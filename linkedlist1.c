#include <stdio.h>
#include <stdlib.h>
typedef struct list_
{
    struct node_ * head;
    struct node_ * tail;
    struct node_ * cur;
    int numofdata;
}List;
typedef struct node_
{
    int data;
    struct node_ * next;
}Node;
void insertdata(List * L, int a)
{   
    Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->data = a;
    newnode->next = NULL;
    if (L->head == NULL)
    {
	L->head = newnode;
	L->cur = newnode;
    }
    else
    {
    	L->tail->next = newnode;
    }
    L->tail = newnode;
    L->cur = newnode;
    L->numofdata++;
}
void printcurdata(List * L)
{
    printf("\nCur data is = %d\n",L->cur->data);
}
void printdata(List * L)
{
	L->cur = L->head;
	while(1)
	{
	    printf("[%d]\n",L->cur->data);
	    if (L->cur->next != NULL)
	    {
		    L->cur = L->cur->next;
	    }
	    else
	    {
		    puts("Data Print END!\n\n");
		    L->cur = L->tail;
		    break;
	    }
	}
}
void deletelastdata(List * L)
{
    Node * D;
    L->cur = L->head;
    while (1)
    {
        if (L->cur->next->next != NULL)
            L->cur = L->cur->next->next;
        else
	{
	    D = L->cur->next;
	    L->cur->next = NULL;
	    L->tail = L->cur;
	    free(D);
	    break;
	}
    }
}
void deletendata(List * L,int n)
{
    Node * D;
    L->cur = L->head;
    while (1)
    {
        if (L->cur->next->data != n)
            L->cur = L->cur->next;
        else
	{
	    D = L->cur->next;
	    L->cur->next = L->cur->next->next;
	    free(D);
	    break;
	}   
    }
}
void maxdata(List * L, int a)
{
    L->cur = L->head;
    while (1)
    {
	if (L->cur->data != a)
	    L->cur = L->cur->next;
        else
	{
	    printf("[%d]",L->cur->data);
	    L->cur = L->tail;
	    break;
	}   
    }
}


int main(void)
{
    List * L = (List *)malloc(sizeof(List));
    L->cur = NULL;
    L->tail = NULL;
    L->head = NULL;
    L->numofdata = 0;   
    insertdata(L,1);
    insertdata(L,2);
    insertdata(L,3);
    insertdata(L,4);
    insertdata(L,5);
    insertdata(L,6);
    insertdata(L,7);
    insertdata(L,8);
    insertdata(L,9);
    insertdata(L,10);
    printcurdata(L);
    printdata(L);
    deletelastdata(L);
    printcurdata(L);
    printdata(L);
    deletendata(L,5);
    printcurdata(L);
    printdata(L);
    printcurdata(L);
}
