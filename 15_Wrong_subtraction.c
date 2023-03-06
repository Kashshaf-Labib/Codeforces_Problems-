#include<stdio.h>
int main()
{
int n,k,a,b;
scanf("%d %d",&n,&k);
for(int i=1;i<=k;i++)
{
    a=n%10;
    if(a!=0)
    {
        n=n-1;
    }
    else if(a==0)
    {
        n=n/10;
    }
}
printf("%d",n);
return 0;
}