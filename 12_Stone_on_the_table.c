#include<stdio.h>
int main()
{
    int i,j,c=0;
    scanf("%d",&j);
    char str[j];
    scanf("%s",str);
    for(i=0;i<j;i++)
    {
    if(str[i]==str[i+1])
    c++;
    }
    printf("%d\n",c);

return 0;
} 