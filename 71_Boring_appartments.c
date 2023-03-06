#include <stdio.h>
int main()
{
    int t, x, c = 0, ans, rem;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        while (x != 0)
        {
            rem = x % 10;
            x = x / 10;
            c++;
        }
        if (c == 1)
        {
            ans = (10 * (rem - 1)) + c;
            printf("%d\n", ans);
        }
        else if (c == 2)
        {
            ans = (10 * (rem - 1)) + c + 1;
            printf("%d\n", ans);
        }
        else if (c == 3)
        {
            ans = (10 * (rem - 1)) + c + 3;
            printf("%d\n", ans);
        }
        else if (c == 4)
        {
            ans = (10 * (rem - 1)) + c + 6;
            printf("%d\n", ans);
        }
        c = 0;
    }
    return 0;
}