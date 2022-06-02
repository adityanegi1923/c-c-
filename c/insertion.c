#include<stdio.h>
void display(int array[],int n);
int insertion(int array[],int n,int element,int index,int capacity);
int main()
{
    int array[]={10,20,40,50,60};
    int i,n=6;
    int element=30;
    int index=2;
    insertion(array,n,element,index,50);
    n+=1;
    display(array,n);
    return 0;

}
int insertion(int array[],int n,int element,int index,int capacity)
{
    if(n>=capacity)
    {
        return -1;
    }
    for(int i=n-1;i>=index;i--)
    {
    array[i+1]=array[i];
    }
    array[index]=element;
    return 1;
}
void display(int array[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",array[i]);
    }

}