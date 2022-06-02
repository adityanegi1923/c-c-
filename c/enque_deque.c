#include<stdio.h>
#define max 50
int enque(int q[],int r);
int deque(int q[],int f,int r);
void display(int q[],int r);
int main()
{
    int q[max];
    int f=1,r=-1;
    int test,choice;
    do{
        printf("enter\n 1.enque\n 2.deque\n 3.display");
        scanf("%d",choice);
    }
    switch(choice)
    {
        case 1:
        {
            r=enque(int q[],int r);
            if(r==0)
            {
                break;
            }
        }
        case 2:
        {
            f=deque(int q[],int f,int r);
            if(f==-1)
            {
                break;
            }
        }
        case 3:
        {
            display(int q[],int f);
        }
        default
        {
            printf("invalid value\n");
        }
        printf("1.to continue\n 2.exit\n")
        scanf("&test",&test);
        while(test==1)
        {
            return 0;
        }

    }

}
int enque(int q[],int r)
{
    int x;
    if(r==max-1)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("enter the element:");
        scanf("%d",&x);
        r++;
        int q[r]=x;
        printf("element is added\n");
    }
    return r;
}
int deque(int q[],int f,int r)
{
    if(f==-1)
    {
        printf("queue is empty\n");
    }
    else(f==r)
    {
        printf("dequed element is %d",q[f]);
        f=-1;
    }
    else
    {
        printf("dequed element is %d",q[f]);
        f++;
    }
    return f;
}
void display(int q[],int r)
{
    for(;f<r;f++)
    {
        printf("%d",q[f]);
    }
}
