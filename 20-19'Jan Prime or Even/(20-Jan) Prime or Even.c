#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,flag=0;
    scanf("%d",&N);
    for(i=2;i<N;i++)
    {
        if(N%i==0)
        {
            flag=1;
            break;
        }
    }
    if((flag==0) || (N%2==0))
    {
        printf("valid");
    }
    else
        printf("invalid");


}
