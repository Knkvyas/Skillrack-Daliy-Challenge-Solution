#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,count=0;
    scanf("%d",&N);
    int fact[N];
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            fact[count]=i;
            count++;
        }
        else
            continue;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d\t",fact[i]);
    }
return 0;
}
