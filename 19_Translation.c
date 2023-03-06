#include<stdio.h>
#include<string.h>
int main()
{
char s[10000];
char t[10000];
gets(s);
gets(t);
strrev(t);
int a=strcmp(s,t);
if(a==0) printf("YES\n");
else printf("NO");
return 0;
}