#include<stdio.h>
#include<string.h>
int main()
{
int n,i,m;
char str[100];
scanf("%d",&m);
for(int i=0;i<=m;i++)
{
    gets(str);
    n=strlen(str);
    if(n<=10)
    {
        printf("%s\n",str);
    }
    else
    {
    printf("%c%d%c\n",str[0],n-2,str[n-1]);
    }
}
return 0;
}