/* here I am gonna add directly D without finding reminder to match it with given digit.
first condition to check if N<10 and D>N eg. N=5 and D=7 then print = -1
else  assign i=D; and add directly i to sum eg if D=3 then i=3 then i=13 then i=23 so on. Add directly to sum.. condition i<=N.*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N,D,i,sum=0;
    scanf("%d %d",&N,&D);
    i=D;
    while(i<=N)
    {
        if((N<10) && (D>N)){
            sum=0;
            break;}
        else
        {
            sum=sum+i;     // here i am directly adding D, D+10,...
        }
        i=i+10;
    }
    if(sum==0){
        printf("-1");
    }
    else{
        printf("sum = %d",sum);}
    return 0;
}
