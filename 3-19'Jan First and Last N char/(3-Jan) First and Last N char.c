#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,N,count=0;
    char S[100],b[100]={};
    scanf("%s",S);
    scanf("%d",&N);
    printf("hel0");
    for(i=0;i<N;i++)
    {
        printf("%c",S[i]);
    }
    i=strlen(S)-N;
    while(i<strlen(S))
    {
        printf("%c",S[i]);
        i++;
    }
    return 0;

}
