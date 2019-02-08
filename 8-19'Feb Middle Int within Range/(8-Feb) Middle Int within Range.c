#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    int a[N],flag=0;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=1;i<N-1;i++)
    {
        if(a[i]<=a[0] || a[i]>=a[N-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
