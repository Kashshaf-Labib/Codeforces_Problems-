#include<stdio.h>
int main()
{
int n,x=0;
scanf("%d",&n);
char str[4];
for(int i=0;i<n;i++)
{
   scanf("%s",str);
    if(str[1]=='+') x++;
    else if(str[1]=='-') x--;  
}
printf("%d",x);
return 0;
}