#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,X,Y,u=0,v=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&X,&Y);
    for(i=0;i<N;i++)
    {
        if(a[i]==X)
            u++;
        else if(a[i]==Y)
            v++;
    }
    if(u>=v)
        printf("Yes");
    else
        printf("No");
    return 0;

}
