#include<stdio.h>
int main()
{
int t;
long long int x,y,n,k;
scanf("%d",&t);
for (int i=0;i<t;i++)
{
scanf("%lld %lld %lld",&x,&y,&n);
if(n%x==y) printf("%lld\n",n);
else printf("%lld\n",(((n-y)/x)*x)+y);
}
return 0;
}