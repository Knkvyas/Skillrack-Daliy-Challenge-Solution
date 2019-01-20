#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,N;
    float a;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            printf(" %d/4 ",i);
        }
        else
        {
            if(i%4==0)
            {
                printf("%d ",i/4);
            }
            else{
                printf("%d/%d",i/2,4/2);
            }
        }
    }
    return 0;
}
