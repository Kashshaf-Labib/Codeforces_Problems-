#include<stdio.h>
int main()
{
int s1, s2, s3, s4,c=0;;
scanf("%d %d %d %d" ,&s1,&s2,&s3,&s4);
//for (int i=0;i<3;i++)

if(s1==s2 || s1==s3 || s1==s4) c++;
if(s2==s3 || s2==s4) c++;
if(s3==s4) c++;
printf("%d",c);
return 0;
}