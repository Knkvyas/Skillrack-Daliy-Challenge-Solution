#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,k;
    scanf("%d",&N);
    int a[N][N],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&k);
    for(i=k;i<N;i++)
    {
        for(j=k;j<N;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
