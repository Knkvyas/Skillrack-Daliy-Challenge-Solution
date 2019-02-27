#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,N,j,swap;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    if(N%2==0){
        for(i=0;i<N-1;i+=2)
        {
            if(a[i]>a[i+1])
            {
                swap = a[i+1];
                a[i+1] = a[i];
                a[i] = swap;
            }
        }
        for(i=0;i<N;i++)
            printf("%d",a[i]);
    }
    else
    {
        return -1;
    }
    return 0;
}
