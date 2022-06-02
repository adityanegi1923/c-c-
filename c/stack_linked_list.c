#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int data;
    struct stack* next;
};
struct stack* head;
int main()
{
    int choice=0;
    while(choice!=4)
    {
        printf("1:for push\n 2:for pop\n 3:for disp\n ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        disp();
        break;
        default:
        printf("invalid choice\n");
        break;
        }
    }
    return 0;
    
}
void push()
{
    struct stack* ptr=(struct stack*)malloc(sizeof(struct stack));
    int data;
    if(ptr==NULL)
    {
        printf("cannot be pushed");
    }
    else
    {
        printf("insert item:");
        scanf("%d",&data);
        if(head==NULL)
        {
            ptr->data=data;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->data=data;
            ptr->next=head;
            head=ptr;
        }
        printf("item pushed\n");
        
    }
    
}
void pop()
{
    struct stack* ptr;
    int item;
    if(head==NULL)
    {
        printf("stack underflow\n");
    }
    else
    {
        item=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
    }
    printf("item popped\n");
    
}
void disp()
{
    struct stack* ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("stack empty");
    }
    else
    {
        printf("stack elements\n");
        while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    }
}