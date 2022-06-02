
#include<stdio.h>
int binsearch(int array[],int element,int size);
int main()
{
    int array[]={2,3,4,5,6,7,8,9};
    int element=9;
    int size=8;
    int searchindex;
    searchindex=binsearch(array,element,size);
    printf("the value of %d is at position %d",element,searchindex);
    return 0;
}
int binsearch(int array[],int element,int size)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(array[mid]==element)
        {
            return mid;
        }
        if(array[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    return -1;
    
    
}
