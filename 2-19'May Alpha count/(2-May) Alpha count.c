#include<stdio.h>
#include <stdlib.h>
#include<string.h>
// int len(char S[]) // count the string length
// {
//     int i=0,count=0;
//     while(S[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }
int main()
{
    int i,M=0,N=0;
    char s[100];
    scanf("%s",s);
    int stl = len(s);
    // printf("len =%d\n",stl);
    int l = strlen(s);
    for(i=0;i<l;i++)
    {
        if((s[i]>=97) && (s[i]<110))
        {
            M++;
        }
        else
        N++;
    }
    if(M>N)
        printf("FIRSTHALF %d",M);
    else if(N>M)
        printf("SECONDHALF %d",N);
    else if(M==N)
        printf("-1 %d %d",M,N);
    return 0;

}
