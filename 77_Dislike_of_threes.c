#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d", &t);
    while (t--)
    {
        k = 0;
        scanf("%d", &k);
        for (int i = 1; i <= k; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                k++;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}