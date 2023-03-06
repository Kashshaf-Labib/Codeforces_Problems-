#include<stdio.h>
#include<math.h>
int main()
{
long long int n,k,a;
scanf("%lli %lli",&n,&k);
a=ceil(n/2.0);
if(k<=a)
{
    printf("%lli\n",(2*k-1));
}
if(k>a)
{
    printf("%lli\n",(2*(k-a)));

}


return 0;
}
