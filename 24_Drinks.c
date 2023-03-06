#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
float res,sum=0;
for (int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
res=sum/n;
printf("%.4f",res);
return 0;
}