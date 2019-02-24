#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0,e=0,i=0,o=0,u=0;
    char s[1000];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')
            a++;
        else if(s[i]=='e')
            e++;
        else if(s[i]=='i')
            i++;
        else if(s[i]=='o')
            o++;
        else if(s[i]=='u')
            u++;
        else
            continue;
    }
    printf("a %d\n",a);
    printf("e %d\n",e);
    printf("i %d\n",i);
    printf("o %d\n",o);
    printf("u %d\n",u);
    return 0;

}
