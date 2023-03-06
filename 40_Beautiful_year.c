#include<stdio.h>
int main()
{
int y1,y2,y3,y4,r1,r2,r3,r4;
scanf("%d",&y1);
while(y1<10000)
{
y1=y1+1;
y2=y1/10;
y3=y2/10;
y4=y3/10;
r1=y1%10;
r2=y2%10;
r3=y3%10;
r4=y4%10;
if(r4!=r3 && r4!=r2 && r4!=r1 && r3!=r2 && r3!=r1 && r2!=r1)
{
    printf("%d%d%d%d\n",r4,r3,r2,r1); 
    break;
}
}
return 0;
}