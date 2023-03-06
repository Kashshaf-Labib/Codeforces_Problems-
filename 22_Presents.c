#include<stdio.h>
int main()
{
int n,temp;
scanf("%d",&n);
int arr[200];
for(int i=1;i<=n;i++)
{
    scanf("%d",&temp);
    arr[temp]=i;
}
for(int i=1;i<=n;i++)
{
    printf("%d ",arr[i]);
}

return 0;
}