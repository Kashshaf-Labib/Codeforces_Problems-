#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char str[200];
    scanf("%s", &str);
    n = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            str[i] = ' ';
            str[i + 1] = ' ';
            str[i + 2] = ' ';
        }
    }
    printf("%s", str);
    return 0;
}