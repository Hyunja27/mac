#ifndef _praclink_h_
#define _praclink_h_

typedef struct node
{
    int height;
    struct node * next;
}NODE;

typedef struct list
{
    struct node * head;
    struct node * tail;
    struct node * cur;
    struct node * before;
    int datacount;
}List;

void linkedlistinit(TALL * list);
void delete(TALL * list);
#endif
