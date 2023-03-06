#include<stdio.h>
int main()
{
int a=0,d=0,n;
scanf("%d",&n);
char str[n];
scanf("%s",&str);
for(int i=0;i<n;i++)
{
    if(str[i]=='A')
    a++;
    else if(str[i]=='D')
    d++;
}
if(a>d)
printf("Anton");
else if(d>a)
printf("Danik");
else
printf("Friendship");
return 0;
}