#include<stdio.h>
#include<stdlib.h>
struct nodetype
{
    int info;
    struct nodetype *next;
};
void pushatfront(struct nodetype **head,int num)
{
    struct nodetype *ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    ptr->info=num;
    ptr->next=(*head);
    (*head)=ptr;
}
void pushafter(struct nodetype *prev,int num)
{
    if(prev==NULL)
    {
        printf("previous node cannot be null\n");
        return;
    }
    struct nodetype *ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    ptr->info=num;
    ptr->next=prev->next;
    prev->next=ptr;
}
void pushlast(struct nodetype **head_ref,int num)
{
     struct nodetype* ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
     struct nodetype* last=*head_ref;
     ptr->info=num;
     ptr->next=NULL;
    if(last==NULL)
    {
        *head_ref=ptr;
    }
    while(last->next!=NULL)
        last=last->next;
       last->next=ptr;
    
}

void printlist(struct nodetype *head)
{
    struct nodetype *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->info);
            ptr=ptr->next;
            
        }
    }
}
void deletefront(struct nodetype **head,int num)
{
     struct nodetype *ptr=*head,*prev;
     if(ptr->next!=NULL&&ptr->info==num)
     {
         *head=ptr->next;
         free(ptr);
         return;
     }
     while(ptr!=NULL&&ptr->info==num)
     {
         prev=ptr;
         ptr=ptr->next;
         
     }
     if(ptr==NULL)
     return;
     prev->next=ptr->next;
     free(ptr);
}
int main()
{
    struct nodetype* head=NULL;
    int choice=0;
    int x,n,z;
    do{
        printf("enter your choice\n 1:to push at front\n 2:to push in between\n 3:to push at last\n 4:to delete\n 5:display list:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
        printf("enter your number:");
        scanf("%d",&n);
        pushatfront(&head,n);
        break;
        }
        case 2:
        {
        printf("enter your number:");
        scanf("%d",&n);
        pushafter(head->next,n);
        break;
        }
        case 3:
        {
        printf("enter your number:");
        scanf("%d",&n);
        pushlast(&head,n);
        break;
        }
        case 4:
        {
        printf("enter the element on the list:");
        scanf("%d",&z);
        deletefront(&head,z);
        break;
        }
        case 5:
        {
        printf("elements of the list:");
        printlist(head);
        break;
        }
        default:
        {
        printf("invalid case\n");
        break;
        }
        }
        printf("\n1:to continue\n 2:to exit:\n");
        scanf("%d",&x);
    }
    while(x==1);
    {
        return 0;
    }
}