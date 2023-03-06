#include<stdio.h>
int main()
{
int n,c=0,cmax=0;
int arr1[1000],arr2[1000];
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    scanf("%d %d",&arr1[i],&arr2[i]);
}
for(int i=1;i<=n;i++)
{
    if(i==1)
    { 
    c=arr2[i]-arr1[i];
    cmax=c;
    }
    else
    {
        c=c-arr1[i]+arr2[i];
        if(c>cmax) cmax=c;
    }
}
printf("%d",cmax);
return 0;
}