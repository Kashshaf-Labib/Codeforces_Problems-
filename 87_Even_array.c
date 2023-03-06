#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, even = 0, odd = 0, a;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a % 2 != i % 2)
            {
                if (a % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if (even != odd)
            printf("-1\n");
        else
            printf("%d\n", even);
    }
    return 0;
}