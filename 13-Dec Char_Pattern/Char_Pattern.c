#include<stdio.h>
int main() {
   int i,j,k,N;
   char CH1,CH2;
   scanf("%c %c %d",&CH1,&CH2,&N);
   for(i=0;i<N;i++){
       for(j=0;j<=i;j++){         // to print character *
           printf("%c\t",CH1);}
       for(k=i+1;k<N;k++){       // to print character #
           printf("%c\t",CH2);}
       printf("\n");}
   return 0;
}

