#include<stdio.h>
int main()
{
int n,sum1=0,sum2=0,sum3=0;
scanf("%d",&n);
int arr1[n],arr2[n],arr3[n];
for(int i=1;i<=n;i++)
{
    scanf("%d %d %d" ,&arr1[i],&arr2[i],&arr3[i]);
}
for(int i=1,j=1,k=1;i<=n;i++,j++,k++)
{
    sum1=sum1+arr1[i];
    sum2=sum2+arr2[j];
    sum3=sum3+arr3[k];
}
if(sum1==0 && sum2==0 && sum3==0) printf("YES");
else printf("NO");
return 0;
}