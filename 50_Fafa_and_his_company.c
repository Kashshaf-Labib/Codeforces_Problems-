#include <stdio.h>
int main()
{
    int n, c = 0, a;
    scanf("%d", &n);
    a = (n / 2);
    for (int i = 0; i <= a; i++)
    {
        if (i != 0 && n % i == 0)
            c++;
        n = n - 1;
    }
    printf("%d", c);
    return 0;
}