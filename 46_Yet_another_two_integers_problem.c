#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int t;    
long int a,b,moves;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
    scanf("%li %li",&a,&b);
    moves=ceil(abs((a-b))/10.0);
    printf("%li\n",moves);
}
return 0;
}