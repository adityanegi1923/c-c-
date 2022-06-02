#include<stdio.h>
typedef struct node
{
    int data;
    struct list *next;
}list;
struct list *head;
struct listinsert();
int main()
{
    list *f=NULL;
    list *r=NULL;  
    int choice;
    int n;
    do
    {
    printf("1:enter elements in list\n 2:exit");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
     scanf("%d",&n);
     f=listinsert();
     if(f=NULL)
     {
         f=r;
     }
     break;
     case 2:
     break;
    
    default:
     printf("invalid case");
     break;
    }
    printf("1:to continue \n 2:to exit");
    scanf("%d",x);
    while(x==1)
    {
        return 0;
    }
    
}
struct listinsert()
{
    struct list *ptr=NULL;
    int item;
    ptr=(struct list*)malloc(sizeof(struct list));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else
    printf("enter element:");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("node is inserted\n");
};

    

