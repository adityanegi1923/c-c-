#include<stdio.h>
struct queue 
{
    int data;
    struct queue *next;
}nodetype;
nodetype* enque(nodetype*,int);
nodetype* deque(nodetype*,int);
void diplay(nodetype*);
int main()
{
    nodetype* f=null;
    nodetype* r=null;
    int choice;
    int x=1;
    int n;
    do
    {
        printf("1:for enque \n 2:for deque \n 3:display");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            scanf("%d",&n);
            f=enque(nodetype*,int);
            if(f==NULL)
            f=r;
            break;
            case 2:
            if(f==NULL)
            printf("queue is empty");
            else
            {
                f=deque(nodetype*,int);
            }
            if(f==NULL)
            {
                f=r;
            }
            break;
            case 3:
            disp(nodetype*);
            break;
            default:
            printf("invalid choice:");
            break;
        }
    }
    while(x==1)
    {
        return 0;
    }

}
nodetype* enque(nodetype* r,int n)
{
    nodetype* p;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
        p.data=n;
        if(r==NULL)
        r1=p;
        else
        {
            r.next=p;
            r1=p;
        }
        r.next=NULL;
        return(r1);
        


    }

}
nodetype* deque(nodetype* r,int n)
{
    nodetype* p=NULL;
    p=f1;
    f1=f1.next;
    printf("%d",p->info);
    free(p);
    return(f1);
}
void disp(nodetype* f)
{
    if(f==NULL)
    {
        
    }
}
