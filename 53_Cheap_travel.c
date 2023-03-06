#include <stdio.h>
int main()
{
    int n, m, a, b, min;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    if ((m * a) <= b)
    {
        min = n * a;
        printf("%d", min);
    }
    else if ((m * a) > b)
    {
        int x = (n % m) * a;
        if (x > b)
        {
            min = (n / m) * b + b;
            printf("%d", min);
        }
        else
        {
            min = (n / m) * b + x;
            printf("%d", min);
        }
    }
    return 0;
}