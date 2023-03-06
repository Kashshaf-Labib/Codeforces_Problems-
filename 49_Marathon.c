#include<stdio.h>
int main()
{
int a,b,c,d,t,count=0;
scanf("%d",&t);
for (int i=0;i<t;i++)
{
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b>a) count++;
    if(c>a) count++;
    if(d>a) count++;
    printf("%d\n",count);
    count=0;
}
return 0;
}