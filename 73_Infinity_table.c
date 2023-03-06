#include <stdio.h>
#include <math.h>
int main()
{
    long int num, n, d, r, c;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%li", &num);
        n = ceil(sqrt(num));
        d = (n * n) - num;
        if (d < n)
        {
            r = n;
            c = d + 1;
        }
        else if (d >= n)
        {
            c = n;
            d = d - n;
            r = n - d - 1;
        }
        printf("%li %li\n", r, c);
    }
    return 0;
}