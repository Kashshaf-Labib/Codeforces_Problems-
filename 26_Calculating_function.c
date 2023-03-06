#include<stdio.h>
int main()
{
long long int n,f;
scanf("%lld",&n);
f=(n/2)-((n%2)*n);
printf("%lld",f);
return 0;
}