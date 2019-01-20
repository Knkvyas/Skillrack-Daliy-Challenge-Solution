#include<stdio.h>
#include <stdlib.h>

int main()
{
    int M,N,X,i,sum=0;
    scanf("%d %d %d",&M,&N,&X);
    if((M>=1 && M<=N) && (N>=1 && N<=1000))
    {
        for(i=M;i<=N;i++)
        {
            if(i%X==0)
            {
                sum=sum+i;
            }
        }
        if(sum!=0)
        printf("%d",sum);
        else
        printf("-1");
    }
    return 0;


}
