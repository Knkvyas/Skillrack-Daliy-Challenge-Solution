#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,swap,j,t;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        if(a[i]!=0){
            for(j=N-1;j>i;j--)
            {
                if(a[j]==0)
                {
                    swap = a[j];
                    a[j] = a[i];
                    a[i] = swap;
                }
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
}
