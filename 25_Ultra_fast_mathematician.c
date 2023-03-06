#include<stdio.h>
int main()
{
char str1[100],str2[100];
scanf("%s\n%s",&str1,&str2);

for (int i=0;str1[i]!='\0' && str2[i]!='\0';i++)
{
    if(str1[i]!=str2[i])
    printf("1");
    else
    printf("0");
}
return 0;
}