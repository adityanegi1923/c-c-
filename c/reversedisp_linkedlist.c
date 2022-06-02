#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node *head=NULL;
void insertion()
{
    node *ptr;
    int n;
    ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    if(ptr==NULL)
    {
        printf("\ncannot be null\n");
    }
    else
    {
        printf("\nenter the item:");
        scanf("%d",&n);
        ptr->data=n;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
        printf("\nnode inserted\n");
    }
}
void displayltr()
{
    node *ptr;
    ptr=head;
    printf("\nelements of the list from left to right\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void reversedisp()
{
    node *prev=NULL;
    node *current=head;
    node *next=NULL;
    node *ptr;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        
    }
    head=prev;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int choice,x,n;
    do
    {
        printf("\nenter your choice...\n");
        printf("1.to insert\n2.to print data from left to right\n3.to print data from right to left:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insertion();
            break;
            case 2:
            displayltr();
            break;
            case 3:
            reversedisp();
            break;
            default:
            printf("\ninvalid case\n");
            break;
        }
        printf("\ncontinue or not...\n");
        printf("1.to continue\n2.to exit:");
        scanf("%d",&x);
    }
    while(x==1);
    {
        return 0;
    }
}