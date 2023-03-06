#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int c = 0;
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            c = 1;
    }
    if (c == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}