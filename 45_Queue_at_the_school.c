#include<stdio.h>
#include<string.h>
int main()
{
int n,t;
scanf("%d %d",&n,&t);
char g[100];
scanf("%s",&g);
for(int i=0;i<t;i++)
{
    for(int j=0;j<=n;j++)
    {
        if(g[j]=='B' && g[j+1]=='G')
        {
            g[j+1]='B';
            g[j]='G';
            j++;
        }
    }
}
printf("%s",g);
return 0;
}