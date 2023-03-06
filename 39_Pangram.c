#include<stdio.h>
#include<string.h>
void function(char str[100])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
    }
}
int main()
{
int n,c=0,dischar=0;
scanf("%d",&n);
char str[100];
scanf("%s",&str);
function(str);
int len=strlen(str);
for (int i=0;str[i]!='\0';i++)
{
    for(int j=(i+1);str[j]!='\0';j++)
    {
        if(str[i]==str[j])
        {
            c++;
            break;
        }
    }
}
dischar=len-c;
if(dischar==26) printf("YES");
else printf("NO");
return 0;
}