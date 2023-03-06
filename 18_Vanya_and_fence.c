#include<stdio.h>
int main()
{
int n,h,c1=0,c2=0;
scanf("%d %d",&n,&h);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
    if(arr[i]>h) c1=c1+2;
    if(arr[i]<=h) c2=c2+1;
}
printf("%d",(c1+c2));
return 0;
}