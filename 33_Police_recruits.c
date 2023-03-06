#include<stdio.h>
int main()
{
int event,police=0,crime=0,n;
scanf("%d",&event);
for ( int i=0;i<event;i++)
{
    scanf("%d",&n);
    if(n>=1) police=police+n;
    else if(n==-1)
    {
        if(police<=0) crime++;
        else if(police>0) police--;

    }

}
printf("%d",crime);
return 0;
}