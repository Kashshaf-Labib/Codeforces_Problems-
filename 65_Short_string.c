#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char str[200];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &str);
        printf("%c%c", str[0], str[1]);
        int len = strlen(str);
        for (int j = 3; j < len; j = j + 2)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}