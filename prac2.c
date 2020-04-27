#include <stdio.h>
#include <stdlib.h>
#include "praclink.h"
int main(void)
{
    int num,i=0;
    List list;
    linkedlistinit(list);
    while (i<5)
    {
	scanf("%d",&num);
	newNode = (Node *)malloc(sizeof(TALL));
	newNode->height = num;
	newNode->next = NULL;
	if (list->head == NULL)
	    list->head = newNode;
	    list->cur = newNode;
	else
	{
	    list->cur = tail;
	    list->cur->next = newNode;
	    list->cur->before = tail;
	}
	list->tail = newNode;
	list->datacount++;
	i++;
    }
    while (i<5)
    {
	scanf("%d",&num);
	newNode = (TALL *)malloc(sizeof(TALL));
	newNode->height = num;
	newNode->next = NULL;
	if (list->head == NULL)
	    list->head = newNode;
	else
	    list->tail->next = newNode;
	list->tail = newNode;
	list->datacount++;
	i++;
    }
    return 0;
}
