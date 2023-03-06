#include <stdio.h>
int main()
{
    int t, a, b, c, n, sum, result;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &n);
        sum = (a + b + c + n);
        result = sum / 3;
        if (sum % 3 == 0 && result >= a && result >= b && result >= c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}