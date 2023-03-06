#include <stdio.h>
int main()
{
    long long t, n;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        printf("%lld %lld\n", (-n + 1), n);
    }
    return 0;
}