#include <stdio.h>
int main()
{
    int t, c1 = 0, c2 = 0, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        c1 = 0;
        c2 = 0;
        n = 0;
        scanf("%d", &n);
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                c1++;
            }
            else if (n % 6 == 3)
            {
                n = n * 2;
                c1++;
            }
            else if (n % 6 != 3 && n % 6 != 0)
            {
                c2 = -1;
                break;
            }
        }
        if (c2 == -1)
            printf("%d\n", c2);
        else
            printf("%d\n", c1);
    }
    return 0;
}