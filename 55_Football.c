#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int c = 1, c1 = 0;
    scanf("%s", &str);
    int a = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
            c++;
        if (str[i] != str[i + 1] && c < 7)
            c = 1;
    }
    if (c >= 7)
        printf("YES");
    else
        printf("NO");
    return 0;
}