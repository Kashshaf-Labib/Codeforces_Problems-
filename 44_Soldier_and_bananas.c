#include<stdio.h>
int main()
{
int k,n,w,total,borrow;
scanf("%d %d %d",&k,&n,&w);
total=(k*w*(w+1))/2;
borrow=total-n;
if(borrow>0) printf("%d",borrow);
else printf("0");

return 0;
}