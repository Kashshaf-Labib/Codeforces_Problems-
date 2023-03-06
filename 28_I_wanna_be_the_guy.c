#include<stdio.h>
int main()
{
int arr1[1000],arr2[1000],n,n1,n2,sum1=0,sum2=0,sumn=0,sum=0,c=0;
scanf("%d",&n);
sumn=(n*(n+1))/2;
scanf("%d",&n1);
for(int i=1;i<=n1;i++)
{
    scanf("%d",&arr1[i]);
}
scanf("%d",&n2);
for(int i=1;i<=n2;i++)
{
    scanf("%d",&arr2[i]);
}
for(int i=1;i<=n1;i++)
{
    sum1=sum1+arr1[i];
}
for(int i=1;i<=n2;i++)
{
    sum2=sum2+arr2[i];
}
for(int i=1;i<=n1;i++)
{
    for(int j=0;j<=n2;j++)
    {
        if(arr2[j]==arr1[i]) c=c+arr2[j];

    }
}
sum=sum1+sum2-c;
if(sum==sumn) printf("I become the guy.");
else printf("Oh, my keyboard!");
return 0;
}