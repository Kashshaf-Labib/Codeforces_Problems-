#include<stdio.h>
int main()
{
int r,b;
scanf("%d %d",&r,&b);
if(r>b)
{
    printf("%d ",b); 
    printf("%d",(r-b)/2);
}
if(b>r)
{
    printf("%d ",r); 
    printf("%d",(b-r)/2);
}
if(r==b)
{
    printf("%d ",r);
    printf("0");
}
return 0;
}