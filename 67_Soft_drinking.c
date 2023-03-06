#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np, x, y, z, min;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    x = (k * l) / nl;
    y = c * d;
    z = p / np;
    if (x <= y && x <= z)
        min = x;
    else if (y <= x && y <= z)
        min = y;
    else
        min = z;
    printf("%d", (min / n));
    return 0;
}