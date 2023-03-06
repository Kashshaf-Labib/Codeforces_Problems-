#include <stdio.h>
#include <string.h>
int main()
{
    int t, n, r, g, b, R, G, B;
    char str[6];
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        scanf("%s", &str);
        for (int i = 0; i < 6; i++)
        {
            if (str[i] == 'r')
                r = i;
            if (str[i] == 'g')
                g = i;
            if (str[i] == 'b')
                b = i;
            if (str[i] == 'R')
                R = i;
            if (str[i] == 'G')
                G = i;
            if (str[i] == 'B')
                B = i;
        }
        if ((r < R) && (g < G) && (b < B))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}