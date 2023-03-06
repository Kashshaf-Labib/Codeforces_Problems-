#include <stdio.h>
#include <string.h>
int main()
{
    int a1, a2, a3, a4, cal = 0;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    char str[200000];
    scanf("%s", &str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '1')
            cal = cal + a1;
        else if (str[i] == '2')
            cal = cal + a2;
        else if (str[i] == '3')
            cal = cal + a3;
        else if (str[i] == '4')
            cal = cal + a4;
    }
    printf("%d", cal);
    return 0;
}