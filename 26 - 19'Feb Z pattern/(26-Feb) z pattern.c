#include<stdio.h>
#include <stdlib.h>
int Print(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
}
int main()
{
    int i,j,n,count;
    scanf("%d",&n);
    count=n;
    Print(n);
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf("* ");
        }
        printf("%d ",n-i);
        printf("\n");
    }
    Print(n);
    return 0;
}
