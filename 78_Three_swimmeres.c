#include <stdio.h>
int main()
{
    int t;
    long long p, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld %lld", &p, &a, &b, &c);
        if (p % a == 0 || p % b == 0 || p % c == 0)
            printf("0\n");
        else
        {
            long long x = a - (p % a);
            long long y = b - (p % b);
            long long z = c - (p % c);
            if (x <= y && x <= z)
                printf("%lld\n", x);
            else if (y <= x && y <= z)
                printf("%lld\n", y);
            else
                printf("%lld\n", z);
        }
    }
    return 0;
}