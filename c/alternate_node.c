
#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node* insertion(node *head,int num)
{
    node *ptr;
    ptr=(struct nodetype *)malloc(sizeof(struct nodetype));
    node *temp;
    ptr->data=num;
    ptr->next=NULL;
    if(ptr==NULL)
    {
        printf("\noverflow\n");
    }
    else
    {
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
        }
        return head;
    }
}
void display(node *head)
{
    node *temp;
    temp=head;
    node *ptr;
    ptr=head;
    node *ptr2;
    ptr2=head;
    int d=0;
    int c=0;
    printf("\noriginal list:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nnodes at even position:");
    while(ptr!=NULL)
    {
        if(c%2!=0)
        {
            printf("%d ",ptr->data);
        }
        c++;
        ptr=ptr->next;
    }
    printf("\nnodes at odd position:");
    while(ptr2!=NULL)
    {
        if(d%2==0)
        {
            printf("%d ",ptr2->data);
        }
        d++;
        ptr2=ptr2->next;
    }
}
int main()
{
    node *head=NULL;
    int choice;
    int x=1,n;
    do
    {
        printf("enter your choice");
        printf("\n1.insertion\n2.display:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\nenter the number\n");
                scanf("%d",&n);
                head=insertion(head,n);
                break;
            }
            case 2:
            {
                display(head);
                break;
            }
            default:
            {
                printf("invalid case");
            }
        }
        printf("\ndo you want to continue or not:");
        printf("\n1.to continue\n2.to exit:");
        scanf("%d",&x);
    }
    while(x==1);
    {
        return 0;
    }
}