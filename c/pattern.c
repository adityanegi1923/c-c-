#include<stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int k;
    printf("enter a no :");
    scanf("%d",&n);
    for(i=0;i<(n*2)-1;i++)
    {
        for(j=0;j<(n*2)-1;j++)
        {
            for(k=0;k<i-1;k++)
            {
                printf("%d ",n);
                i--;
            }
        }
        printf("\n");
    }
    return 0;
    
}