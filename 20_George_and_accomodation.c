#include<stdio.h>
int main()
{
int n,i,j,c=0;
int arr1[100],arr2[100];
scanf("%d",&n);
for (i=0,j=0;i<n;i++,j++)
{
    scanf("%d %d",&arr1[i],&arr2[j]);
}
for (i=0,j=0;i<n;i++,j++)
{
    if (arr1[i]<=arr2[j]-2) c++;
}
printf("%d",c);
return 0;
}