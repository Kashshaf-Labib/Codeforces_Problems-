#include <stdio.h>
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a == 0)
            printf("1\n");
        else
            printf("%d\n", (1 * a) + (2 * b) + 1);
    }
    return 0;
}