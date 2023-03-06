#include<stdio.h>
int main()
{
int b,t;
scanf("%d",&t);
int arr[t];
for (int i=0;i<t;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]==1 || arr[i]==2) printf("0\n");
    else printf("%d\n",(arr[i]-1)/2);
}

return 0;
}