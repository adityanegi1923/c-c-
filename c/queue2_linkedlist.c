#include <stdio.h>
#include<stdlib.h>
struct queue
{
    int info;
    struct queue *next;
}
struct queue *head=NULL;
struct queue *last=NULL;
void enque();
void deque();
void printqueue();
int main()
{
    int choice=0;
    int x=1;
    int n;
    do
    {
      printf("instruction for queue:\n");
      printf("1:for enque \n 2:for deque: \n 3:for peak \n ")
    }
    
}