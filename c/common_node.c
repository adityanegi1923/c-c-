#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node *insertion(node *head1,node *head2,int num1,int num2)
{
    node *ptr,*ptr2;
    node *temp,*temp2;
    temp=head;
    temp2=head2;
    ptr=(struct nodetype *)malloc(sizeof(struct nodetype));
    ptr2=(struct nodetype *)malloc(sizeof(struct nodetype));
    ptr->data=num1;
    ptr->next=NULL;
    ptr2->data=num2;
    ptr2->next=NULL;
    if(ptr==NULL&&ptr2==NULL) 
    {
        printf("\noverflow\n");
    }
    else
    {
        if(head1==NULL)
        {
            head1=ptr;
        }
        else if(head2=NULL)
        {
            head2=ptr2;
        }
        else
        {
            while(temp->next!=NULL&&temp2->next!=NULL)
            {
                temp=temp->next;
                temp2=temp->next;
            }
            
        }
        
    }
    
}