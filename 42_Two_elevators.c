#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a,b,c,x,y;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d %d",&a,&b,&c);
        if(a==1) printf("1\n");
    else
    {
        x=a-1;
        if(b>=c)
        {
          y=b-1;
        }
        else 
        {
            y=(c-b)+(c-1);

        }
        if(x<y) printf("1\n");   
        else if(x>y) printf("2\n");
        else printf("3\n");    
    }
}
return 0;
}