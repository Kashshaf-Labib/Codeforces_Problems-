#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (a[1] != a[2] && a[2] == a[3])
            printf("1\n");
        else
        {
            x = a[1];
            for (int i = 1; i <= n; i++)
            {
                if (a[i] != x)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}