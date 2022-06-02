#include<stdio.h>
#define max 50
int push(int stack[],int top);
int pop(int stack[],int top);
int peek(int stack[]);
int display(int stack[]);
int main()
{
    int stack[max];
    int top=-1;
    int choice;
    int test=1;
    do{
    printf("enter\n 1.for push\n 2.for pop\n 3.for peek \n 4.for display\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        top=push(stack,top);
        break;
        case 2:
        top=pop(stack,top);
        break;
        case 3:
        peek(stack);
        break;
        case 4:
        display(stack);
        break;
        default:
        printf("invalid choice\n");
    }
    printf(press\n 1. to continue \n 2. to exit\n);
    scanf("%d",&test);
    while(test==1)
    {
        return 0;
    }
}
    int push(int stack[],top)
    {
        int x;
        if(top==max-1)
        {
            printf("stack overflow");
        }
        printf("enter the element:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("element is added\n");
        return top;
        
    }
    int pop(int stack[],top)
    {
        if(top==-1)
        {
            printf("stack underflow");
        }
        else
        {
        printf("popped element is %d",stack[top]);
        top--;
        }
        return top;
    }