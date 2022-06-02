#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue* next;
};
struct queue* front;
struct queue* back;
void insert();
void delete();
void display();
int main()
{
    int choice = 0;
    while(choice!=4)
    {
        printf("1:to insert\n2:to delete\n3:to display");
        scanf("%d",&choice);
        switch(choice)
        case 1:
        insert();
        case 2:
        delete();
        case 3:
        display();
        default:
        printf("invalid case");
    }
    return 0;
}
void insert()
{
    struct queue* ptr=(struct queue*)malloc(sizeof(struct queue));
    int data;
    if(ptr==NULL)
    {
        printf("cannot be inserted");
    }
    else
    {
        printf("enter data:");
        scanf("%d",&data);
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            ptr=rear;
            rear->next=ptr;
        }
    }    
}
void pop()
{
    struct queue* ptr;
    int data;
    if(front==NULL)
    {
        printf("queue underflow");
    }
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
    
}
void di
