#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int index = 1;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'h' && index == 1)
            index++;
        else if (str[i] == 'e' && index == 2)
            index++;
        else if (str[i] == 'l' && index == 3)
            index++;
        else if (str[i] == 'l' && index == 4)
            index++;
        else if (str[i] == 'o' && index == 5)
            index++;
        if (index == 6)
            break;
    }
    if (index == 6)
        printf("YES");
    else
        printf("NO");
    return 0;
}