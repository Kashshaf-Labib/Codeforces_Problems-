#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 3 == 0)
            printf("%d %d\n", (n / 3), (n / 3));
        else if (n % 3 == 1)
        {

            printf("%d %d\n", (n / 3) + 1, (n / 3));
        }
        else
        {
            printf("%d %d\n", (n / 3), (n / 3) + 1);
        }
    }
    return 0;
}