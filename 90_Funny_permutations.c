#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 2)
            printf("2 1");
        else if (n == 3 || n == 1)
            printf("-1");
        else
        {
            for (int i = (n - 1); i <= n; i++)
            {
                printf("%d ", i);
            }
            for (int i = 1; i <= (n - 2); i++)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}