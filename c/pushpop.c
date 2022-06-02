/* NAME-ADITYA NEGI
   SECTION-B
   ROLL NO-27
   */
#include<stdio.h>
#define MAX 10
int main()
{
    int stack[MAX], top = -1, choice, test=1;
    do{
        printf("Press 1 for PUSH Operation\nPress 2 for POP Operation\nPress 3 for DISPLAY the elements of stack\nPress 4 for PEEK Operation: ");
            scanf("%d", &choice);
        switch (choice)
        {
        case 1:
                top = PUSH(stack, top);
                break;
        case 2:
                top = POP(stack, top);
                break;
        case 3:
                DISPLAY(stack, top);
                break;
        case 4:
                PEEK(stack, top);
                break;
        default:
                printf("Invalid Choice\n");
        }
        printf("Press 1 for continue\nPress 0 to stop: ");
        scanf("%d", &test);
    }
    while(test == 1);
    return 0;
}
int PUSH(int stack[], int top)
{
    int x;
    if(top == MAX-1)
        printf("Stack is full\n");
    else{
        printf("Enter the element: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
        printf("Element is added to stack\n");
    }
    return top;
}
int POP(int stack[], int top)
{
    if(top == -1)
        printf("Stack is empty\n");
    else{
        printf("popped element is %d\n", stack[top]);
        top--;
    }
    return top;
}

void DISPLAY(int stack[], int top)
{
    if(top == -1)
        printf("Stack is empty\n");
    else{
        for( ; top > -1 ; top--)
        printf("%d\n", stack[top]);
    }
}

void PEEK(int stack[], int top)
{
    if(top == -1)
        printf("Stack is empty\n");
    else{
        printf("%d\n", stack[top]);
    }
}
