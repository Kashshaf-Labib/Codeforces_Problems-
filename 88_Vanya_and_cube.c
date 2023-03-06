#include <stdio.h>
int main()
{
    int n, a = 0, i;
    scanf("%d", &n);
    for (i = 1; a <= n; i++)
    {
        a = a + (i * (i + 1) / 2);
    }
    printf("%d\n", i - 2);
    return 0;
}