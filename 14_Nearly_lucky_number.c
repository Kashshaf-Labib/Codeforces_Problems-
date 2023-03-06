#include<stdio.h>
int main()
{
int c=0;    
long long a;
scanf("%lld",&a);
while(a!=0)
{
    if(a%10==7 || a%10==4) c++;
    a=a/10;
}
if(c==4||c==7)
printf("YES");
else
printf("NO");
return 0;
}