#include <stdio.h>
#include <string.h>
int main()
{
    int t, n, c = 0;
    char str1[100], str2[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%s", str1);
        scanf("%s", str2);
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'G')
            {
                str1[i] = 'B';
            }
            if (str2[i] == 'G')
            {
                str2[i] = 'B';
            }
            if (str1[i] == str2[i])
                c++;
        }

        if (c == n)
            printf("YES\n");
        else
            printf("NO\n");
        c = 0;
    }

    return 0;
}