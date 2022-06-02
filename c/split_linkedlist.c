#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node* insertion(node *head,int n)
{
    node* ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    if(ptr==NULL)
    {
        printf("cannot be null");
    }
    else
    {
        ptr->data=n;
        if(head=NULL)
        {
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
        
    }
    return head;
    
}
node* split(node *head1,node* head2,int key)
{
    node *ptr,*preptr;
    if(head1=NULL)
    {
        printf("\nlist is empty\n");
    }
    else
    {
        ptr=head1;
        while(ptr->data!=key||ptr->next==NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
            if(ptr->data==key)
            {
                ptr->next=head2;
                head2=ptr;
                preptr->next=NULL;
            }
            else
            {
                printf("key not found\n");
            }
            
        }
    }
    return head1;
    return head2;
}
void display(node* head1,node* head2)
{
    node*ptr,*temp;
    head1=ptr;
    head2=temp;
    printf("\nprint list 1:")
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\nprint list 2:")
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main()
{
    node *head1=NULL;
    node*head2=NULL;
    int choice,x,n;
    do
    {
        printf("\nenter your choice\n");
        printf("1.to insert an item in the list\n2.to split the list in two at a given position\n3.to display the list:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\ninsert an item:");
            scanf("%d",&n);
            head1=insertion(head1,n);
            break;
            case 2:
            printf("\nenter the position from where you want to split:");
            scanf("%d",&n);
            head1=split_linked_list(head1,head2,n);
            break;
            case 3:
            display(head1,head2);
            break;
            default:
            printf("\ninvalid case\n");
        }
        printf("\ncontinue or not...\n");
        printf("\1.to continue\n2.to exit\n");
        scanf("%d",&x);
    } while (x==1)
    {
        return 0;
    }
}