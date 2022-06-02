
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} nodetype;

void insert(nodetype **start, nodetype **end)
{
    int data;
    scanf("%d", &data);
    nodetype *newNode = (nodetype *)malloc(sizeof(nodetype));
    if (newNode == NULL)
    {
        printf("Overflow\n");
        return;
    }
    newNode->info = data;
    newNode->next = NULL;
    nodetype *ptr = *start;
    if (*start == NULL)
    {
        *start = newNode;
        *end = newNode;
        return;
    }
    (*end)->next = newNode;
    (*end) = (*end)->next;
    (*end)->next = *start;
}

void display(nodetype *start){
     if(start == NULL){
         printf("No elements\n");
         return;
     }
     nodetype *ptr = start;
     printf("%d ", start->info);
     ptr = ptr->next;
     if(ptr == start){
         return;
     }
     while(ptr != start){
         printf("%d ", ptr->info);
         ptr = ptr->next;
     }
}

void searchAndDelete(nodetype **start, nodetype **end){
     int key;
    scanf("%d", &key);
    nodetype *ptr = *start;
    if (ptr == NULL)
        return;
    if(ptr == *end){
        if(ptr->info == key){
           *start = NULL;
           *end = NULL;
           printf("Node deleted successfully\n");
           return;
        }
           printf("Node not present\n");
        return;
    }
    if(ptr->info == key){
        *start = ptr->next;
        (*end)->next = *start;
        ptr->next = NULL;
        free(ptr);
        printf("Node deleted successfully\n");
        return;
    }
    while(ptr->next != *end){
        if(ptr->next->info == key){
            nodetype *temp = ptr->next;
            ptr->next = ptr->next->next;
            temp->next = NULL;
            free(temp);
            printf("Node deleted successfully\n");
            return;
        }
        ptr = ptr->next;
    }
    if((*end)->info == key){
        *end = ptr;
        ptr = ptr->next;
        (*end)->next = *start;
        ptr->next = NULL;
        free(ptr);
        printf("Node deleted successfully\n");
        return;
    }
    printf("Node is not present\n");
}

int main(){
    nodetype *start = NULL, *end = NULL;
    insert(&start, &end);
    insert(&start, &end);
    insert(&start, &end);
    insert(&start, &end);
    insert(&start, &end);
    insert(&start, &end);
    insert(&start, &end);
    display(start);
    printf("\n");
    searchAndDelete(&start, &end);
    display(start);
    printf("\n");
    searchAndDelete(&start, &end);
    display(start);
    printf("\n");
    searchAndDelete(&start, &end);
    display(start);
    return 0;
}




