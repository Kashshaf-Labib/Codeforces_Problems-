#include<stdio.h>
void func(char str[100])
{
    int i,c1=0,c2=0;
    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        c1++;
        else if(str[i]>=97 && str[i]<=122)
        c2++;
    }
    if(c1>c2)
    {
        for (i=0;str[i]!='\0';i++)
        {
        if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
        }
    }
    else if(c2>c1)
    {
        for (i=0;str[i]!='\0';i++)
        {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        }
    }
    else
    {
       for (i=0;str[i]!='\0';i++)
        {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        }
    }
}
int main()
{
char str[100];
gets(str);
func(str);
printf("%s",str);
return 0;
}