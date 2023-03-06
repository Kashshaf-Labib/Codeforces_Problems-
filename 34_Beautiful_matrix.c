#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[100][100];
int m,n;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(arr[i][j]==1)
        {
            m=abs(i-2);
            n=abs(j-2);
            printf("%d",(m+n));
        }
    }
}

return 0;
}