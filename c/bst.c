#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *left, *right;
}node;
node* creation(node *root,int data)
{
    node *ptr;
    ptr=(struct nodetype*)malloc(sizeof(struct nodetype));
    ptr->data=data;
    ptr->left=ptr->right=NULL;
    return ptr;
}
node* insertion(node *root,int data)
{
    if(root==NULL)
    {
        root=creation(root,data);
    }
    else if(data<=root->data)
    {
        root->left=insertion(root->left,data);
    }
    else
    {
        root->right=insertion(root->right,data);
    }
    return root;
}
int search(node *root,int num)
{
    if(root==NULL)
    {
        printf("\ntree is empty\n");
        return -1;
    }
    else if(root->data==num)
    {
        return 1;
    }
    else if(num<=root->data)
    {
        return search(root->left,num);
    }
    else
    {
        return search(root->right,num);
    } 
}
int findmin(node *root)
{
    if(root==NULL)
    {
        printf("\ntree is empty\n");
        return -1;
    }
    else
    {
        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root->data;
    }
}
int findmax(node *root)
{
    if(root==NULL)
    {
        printf("\ntree is empty\n");
    }
    else
    {
        while(root->right!=NULL)
        {
            root=root->right;
        }
        return root->data;
    }
}
int preorder(node *root)
{
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int inorder(node *root)
{
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int postorder(node *root)
{
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
node* deletion(node *root,int num)
{
    node *ptr;
    if(root==NULL)
    {
        printf("list is empty");
    }
    else if(num<root->data)
    {
        root->left=deletion(root->left,num);
    }
    else if(num>root->data)
    {
        root->right=deletion(root->right,num);
    }
    else
    {
        if(root->left==NULL&&root->right==NULL)
        {
            free(root);
            return root;
        }
        else if(root->left==NULL)
        {
            ptr=root;
            root=root->right;
            free(ptr);
            return root;
        }
        else if(root->right==NULL)
        {
            ptr=root;
            root=root->left;
            free(ptr);
            return root;
        }
        else
        {
            ptr=findmin(ptr->right);
            root->data=ptr->data;
            root->right=deletion(root->right,num);
        }
    }
}
int leafnodecount(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    else
    {
        return leafnodecount(root->left)+leafnodecount(root->right);
    }
}
int main()
{
    node *root = NULL;
    int choice,x,n,count=0;
    do
    {
        printf("\nenter your choice...\n");
        printf("1.insert\n2.deletion\n3.search\n4.count\n5.preorder\n6.inorder\n7.postorder:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nenter the item:");
            scanf("%d",&n);
            root=insertion(root,n);
            count++;
            break;
            case 2:
            printf("\nenter the item to be deleted:");
            scanf("%d",&n);
            root=deletion(root,n);
            break;
            case 3:
            printf("\nenter the item to search:");
            scanf("%d",&n);
            search(root,n);
            if(search(root,n)==1)
            {
                printf("\nitem found on the list\n");
            }
            else
            {
                printf("\nitem not found on the list\n");
            }
            break;
            case 4:
            printf("/nthe number of nodes in the tree are %d",count);
            break;
            case 5:
            printf("\nitems of the list in preorder way:");
            preorder(root);
            break;
            case 6:
            printf("\nitems of nodes in the inorder way:");
            inorder(root);
            break;
            case 7:
            printf("\nitems of nodes in the postorder way:");
            postorder(root);
            break;
            default:
            printf("\ninvalid case\n");
            break;
        }
        printf("\ncontinue or not...\n");
        printf("\n1.continue\n2.exit:");
        scanf("%d",&x);
    } while (x==1);
    {
        return 0;
    }
    
}   