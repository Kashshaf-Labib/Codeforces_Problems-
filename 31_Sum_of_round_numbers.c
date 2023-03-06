#include<stdio.h>
int main()
{
int n,c=1,a1,a2,a3,r1,r2,r3;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
    if(arr[i]>0 && arr[i]<10)
    {
        printf("%d\n%d",c,arr[i]);
    }
    else if(arr[i]>=10 && arr[i]<100)
    {
        c++;
        a1=(arr[i]/10)*10;
        r1=arr[i]%10;
        printf("%d\n%d %d",c,a1,r1);
    }
    else if(arr[i]>=100 && arr[i]<1000)
    {
        a1=(arr[i]/100)*100;
        r1=(arr[i]%100);
        a2=(r1/10)*10;
        r2=(r1%10);
        c=3;
        printf("%d\n%d %d %d",c,a1,a2,r2);
    }
    else if(arr[i]>=1000 && arr[i]<10000)
    {
        a1=(arr[i]/1000)*1000;
        r1=(arr[i]%1000);
        a2=(r1/100)*100;
        r2=(r1%100);
        a3=(r2/10)*10;
        r3=r2%10;
        c=4;
        printf("%d\n%d %d %d %d",c,a1,a2,a3,r3);
    }
    else if(arr[i]==10000)
    {
        printf("%d\n%d",c,arr[i]);
    }
}
return 0;
}
//not completed