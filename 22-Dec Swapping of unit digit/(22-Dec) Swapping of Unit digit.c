#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,N,f_rem,b_rem; // f_rem is reminder from front direction and b_rem is the remainder form back dirn
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=N-1;
    for(i=0;i<N/2;i++)
    {
        f_rem=arr[i]%10;
        b_rem=arr[j]%10;
        arr[i]=arr[i]/10;
        arr[j]=arr[j]/10;
        arr[j]=arr[j]*10+f_rem;
        arr[i]=arr[i]*10+b_rem;
        j=j-1;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
