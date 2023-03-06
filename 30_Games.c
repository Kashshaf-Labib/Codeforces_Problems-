#include<stdio.h>
int main()
{
int n,c=0;
scanf("%d",&n);
int arr1[n],arr2[n];
for ( int i=0;i<n;i++)
{
    scanf("%d %d",&arr1[i],&arr2[i]);
}
for ( int i=0;i<n;i++)
{
    for (int j = 0; j < n; j++)
    {
        if(arr1[i]==arr2[j]) c++;
    }
    
}
printf("%d",c);
return 0;
}