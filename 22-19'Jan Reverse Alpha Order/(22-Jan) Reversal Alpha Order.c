#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    int i,j;
    clock_t begin = clock();
    char s[100],lar,count,swap;
    scanf("%s",s);
    for(i=0;i<strlen(s)-1;i++)
    {
        lar=s[i];
        for(j=i+1;j<strlen(s);j++)
        {
            if(lar<s[j])
            {
                lar=s[j];count=j;
            }
        }
        swap = s[i];
        s[i]=lar;
        s[count]=swap;
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("this program took %f seconds to execute \n", time_spent);
    printf("\n%s",s);
    // just checking time took by this method.
}
