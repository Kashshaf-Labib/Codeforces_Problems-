#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char str[300];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &str);
        int len = strlen(str);
        int c = 0;
        if (len % 2 == 0)
        {
            for (int i = 0; i < (len / 2); i++)
            {
                if (str[i] == str[i + (len / 2)])
                    c++;
            }
            if (c == (len / 2))
                printf("YES\n");
            else
                printf("NO\n");
        }

        else
            printf("NO\n");
    }
    return 0;
}