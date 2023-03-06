#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int a = strlen(str);
    // Bubble sorting:
    for (int i = 0; i < (a - 1); i++)
    {
        for (int j = 0; j < (a - i - 1); j++)
        {
            if (str[j] != '+')
            {
                if (str[j] > str[j + 2])
                {
                    char temp = str[j];
                    str[j] = str[j + 2];
                    str[j + 2] = temp;
                }
            }
        }
    }
    printf("%s", str);
    return 0;
}