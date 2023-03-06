#include <stdio.h>
int main()
{
    int t, n, x, floor;
    scanf("%d", &t);
    {
        for (int i = 0; i < t; i++)
        {
            scanf("%d %d", &n, &x);
            if (n == 1 || n == 2)
                printf("1\n");
            else
            {
                floor = ((n - 3) / x) + 2;
                printf("%d\n", floor);
            }
        }
    }
    return 0;
}