#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,len,t,a;
    char s[100];
    scanf("%s",s);
    a=(int)s[0];
    for(i=1;i<strlen(s);i++)
    {
        if(a<(int)s[i]){
            continue;
        }
        else{
            a=(int)s[i];
        }
    }
    printf("%c",a);
return 0;
}
