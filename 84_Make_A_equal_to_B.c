#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int c = 0, a1[n], a2[n], add1 = 0, add2 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a1[i]);
            add1 = add1 + a1[i];
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a2[i]);
            add2 = add2 + a2[i];
        }
        c = abs(add1 - add2);
        for (int i = 0; i < n; i++)
        {
            if (a1[i] != a2[i])
                c1++;
        }
        if (c == c1)
            printf("%d\n", c);
        else
            printf("%d\n", c + 1);
    }
    return 0;
}