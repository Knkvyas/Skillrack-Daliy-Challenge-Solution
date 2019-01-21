#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;)
    {
        if((i+1)<=N){
            sum=sum+i-(i+1);
            printf("is %d sum=%d\n",i,sum);
        }
        else if((i+1)>N){
            sum+=i;
            break;
        }
        i+=2;
    }
    printf("%d",sum);
    return 0;
}
