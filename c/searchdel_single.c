#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
    struct nodetype *prev;
}node;
node* insertion(node *head,int n)
{
    node *ptr;
    ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    if(ptr==NULL)
    {
        printf("\nitem cannot be inserted\n");
    }
    else
    {
        ptr->info=n;
        if(head==NULL)
        {
            ptr->next = NULL;  
            ptr->prev=NULL;  
            ptr->info=n;
            head=ptr;  
        }
        else
        {
            ptr->prev=NULL;
            ptr->next=head;;
            head->prev=ptr;
            head=ptr;
        }
        printf("\nitem inserted\n");
    }
     return head;
}
node* searchdel(node *head,int n)
{
    node*ptr,*preptr;
    ptr=head;
     while(ptr->info!=n)
     {
         ptr=ptr->next;
         if(ptr->next==NULL)
         {
             printf("\ncannot be deleted\n");
         }
         else if(ptr->next->next==NULL)
         {
             ptr->next=NULL;
             printf("\n node deleted\n");
         }
         else
         {
             preptr=ptr->next;
             preptr->next->prev=ptr;
             ptr->next=preptr->next;
             free(preptr);
             printf("\nnode deleted\n");
         }
         
     }
    return head;
}
void display(node *head)
{
    node *ptr;
    ptr=head;
    printf("elements of the list\n");
    while(head->next!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }
}
int main()
{
    node *head=NULL;
    int choice,x,n;
    do
    {
        printf("\nenter your choice....\n");
        printf("\n1.to insert\n2.to search and delete a node\n3.to display:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nenter the item:");
            scanf("%d",&n);
            head=insertion(head,n);
            break;
            case 2:
            printf("\nenter the item you want to delete:");
            scanf("%d",&n);
            head=searchdel(head,n);
            break;
            case 3:
            display(head);
            break;
            default:
            printf("\ninvalid choice\n");
        }
        printf("\ncontinue or not..\n");
        printf("1.to continue\n2.to exit:");
        scanf("%d",&x);
    }
    while(x==1);
    {
        return 0;
    }
    
}
