#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    char ch1,ch2;
    scanf("%s %c %c",s,&ch1,&ch2);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==ch1)
        {
            s[i]=ch2;
        }
    }
    printf("%s",s);
    return 0;
}
