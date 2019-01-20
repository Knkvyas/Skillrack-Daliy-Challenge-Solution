#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    int a[16],i;
    i=0;
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }int j,c=1;
    for(int k=i-1;k>=0;k--)
    {
        for(j=0;j<c;j++){
        printf("%d",a[k]);}c++;printf("\n");
    }
}
