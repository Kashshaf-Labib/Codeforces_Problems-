#include <stdio.h>
int main()
{
    int n, m, min;
    scanf("%d %d", &n, &m);
    if (n < m)
        min = n;
    else if (m < n)
        min = m;
    else
        min = n;
    if (min % 2 == 0)
        printf("Malvika");
    else
        printf("Akshat");
    return 0;
}