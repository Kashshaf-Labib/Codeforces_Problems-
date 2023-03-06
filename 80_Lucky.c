#include <stdio.h>
int main()
{
    int t, arr[100], c1 = 0, c2 = 0;
    scanf("%d", &t);
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%1d", &arr[i]);
            c1 = c1 + arr[i];
        }
        for (int i = 3; i < 6; i++)
        {
            scanf("%1d", &arr[i]);
            c2 = c2 + arr[i];
        }
        if (c1 == c2)
            printf("YES\n");
        else
            printf("NO\n");
        c1 = 0;
        c2 = 0;
    }
    return 0;
}