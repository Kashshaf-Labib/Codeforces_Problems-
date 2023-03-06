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
char str1[100];
char str2[100];
gets(str1);
gets(str2);
function(str1); function(str2);
int p=strcmp(str1,str2);
printf("%d",p);
return 0;
}