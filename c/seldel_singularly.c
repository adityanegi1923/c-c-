#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
}node;
node* insertion(node *head,int data)
{
    node *ptr;
    ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    if(ptr==NULL)
    {
        printf("\ncannot be null\n");
    }
    else
    {
        ptr->info=data;
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
        printf("\nitem inserted\n");
    }
    return head;
}
node* delbychoice(node *head,int key)
{
    node *ptr,*delnode;
    ptr=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head->info==key)
            {
                head=head->next;
                free(head);
            }
    else
    {
        delnode=ptr->next;
        while(delnode->info!=key&&delnode!=NULL)
        {
            delnode=delnode->next;
            ptr=ptr->next;
        }
        if(delnode==NULL)
        {
            printf("\nnode not found\n");
        }
        else
        {
            printf("\nnode is found and deleted\n");
            ptr->next=delnode->next;
            free(delnode);
        }
    }
    return head;
}
void display(node *head)
{
        while(head!=NULL)
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
        printf("\nenter your choice...\n");
        printf("1.to insert node\n2.delete node by choice\n3.display:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nenter the number to insert:");
            scanf("%d",&n);
            head=insertion(head,n);
            break;
            case 2:
            printf("enter the number to delete:");
            scanf("%d",&n);
            head=delbychoice(head,n);
            break;
            case 3:
            printf("\nelements of the list:\n");
            display(head);
            break;
            default:
            printf("\ninvalid choice\n");
            break;
        }
        printf("\ncontinue or exit\n");
        printf("1.to continue\n2.to exit:");
        scanf("%d",&x);
    }
    while(x==1);
    {
        return 0;
    }
    
}