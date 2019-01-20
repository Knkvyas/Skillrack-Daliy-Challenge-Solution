#include<stdio.h>
#include<string.h>
int main() {
   int i,j;
   char S[100];
   scanf("%s",S);     //Read the string (Remember string should not contain any space);
   for(i=strlen(S)-1;i>=0;i--)
   {
       for(j=i;j<=strlen(S)-1;j++)
       {
           printf("%c",S[j]);
       }
   }
   return 0;
}

// Input  : orange
// Output : egengeangerangeorange
