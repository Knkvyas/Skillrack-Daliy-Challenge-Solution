// Using Remainder Method
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N,D,i,sum=0;
    scanf("%d %d",&N,&D);
    for(i=0;i<N;i++)
    {
        if(i%10==D)
        {
            sum=sum+i;
        }
    }
    if(sum==0){
        printf("-1");
    }
    printf("sum=%d",sum);
    return 0;
}
