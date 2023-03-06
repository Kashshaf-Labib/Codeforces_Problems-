#include<stdio.h>
int main()
{
long x,steps;
scanf("%ld",&x);
steps=x/5;
if(x%5==0)
printf("%ld",steps);
else
printf("%ld",steps+1);

return 0;
}