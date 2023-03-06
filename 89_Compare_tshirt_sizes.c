#include <stdio.h>
#include <string.h>
int main()
{
    long long int t, s1, s2;
    char str1[100], str2[100];
    scanf("%lld", &t);
    while (t--)
    {
        long long int c1 = 1, c2 = 1;
        scanf("%s %s", str1, str2);
        s1 = strlen(str1);
        s2 = strlen(str2);
        for (int i = 0; i < s1; i++)
        {
            if (str1[i] == 'S')
                c1 = c1 * (-1);
            else if (str1[i] == 'M')
                c1 = c1 * 0;
            else if (str1[i] == 'L')
                c1 = c1 * 1;
            else if (str1[i] == 'X')
                c1 = c1 * 2;
        }
        for (int i = 0; i < s2; i++)
        {
            if (str2[i] == 'S')
                c2 = c2 * (-1);
            else if (str2[i] == 'M')
                c2 = c2 * 0;
            else if (str2[i] == 'L')
                c2 = c2 * 1;
            else if (str2[i] == 'X')
                c2 = c2 * 2;
        }
        if (c1 > c2)
            printf(">\n");
        else if (c1 < c2)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}