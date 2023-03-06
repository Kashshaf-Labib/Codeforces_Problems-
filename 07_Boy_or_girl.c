#include<stdio.h>
#include <string.h>
int main()
{
char str[101];
int c=0,dischar;
gets(str);
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
dischar=len-c-1;
if(dischar%2==0) printf("IGNORE HIM!");
else printf("CHAT WITH HER!");
    
return 0;
}
