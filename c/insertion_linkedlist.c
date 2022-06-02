#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node * next;

}* a,* b,* c,* d;

struct node *printatfirst(struct node *a,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=a;
    return a;
    
}
struct node *printatindex(a,int data,4)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=a;
    int i;
    while(i!=index-1)
    {
        p=p.next;
        i++;
    }
    ptr.data=data;
    ptr.next=p.next;
    p.next=ptr;
    return a;

}
struct node *printatlast(struct node *a,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=a;
     ptr->data=data;
    int i=0;
    while(p->next!=NULL)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=NULL;
    return a;
}
void linkedlisttraversal(struct node *ptr )
{
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    a->data=(struct node *)malloc(sizeof(struct node));
    b->data=(struct node *)malloc(sizeof(struct node));
    c->data=(struct node *)malloc(sizeof(struct node));
    d->data=(struct node *)malloc(sizeof(struct node));
    a->data=1;
    a->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=NULL;
    printf("linked list before insertion\n");
    linkedlisttraversal(a);
    a=printatfirst(a,int data);
    printf("linked list after insertion");
    linkedlisttraversal(a);
    return 0;
}


