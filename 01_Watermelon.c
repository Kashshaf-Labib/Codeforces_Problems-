#include<stdio.h>
int main()
{
int w;
printf("Enter the number:");
scanf("%d",&w);
if(w==2 || w>100)
{
    printf("NO\n");
}
else if(w%2==0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
return 0;
}