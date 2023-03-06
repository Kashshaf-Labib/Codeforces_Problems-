#include<stdio.h>
int main()
{
int p,v,t,n,x=0,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    scanf("%d %d %d",&p,&v,&t);
    if(p==1) x++;
    if(v==1) x++;
    if(t==1) x++;
    if(x>=2) sum++;
    x=0;
}
printf("%d",sum);
return 0;
}