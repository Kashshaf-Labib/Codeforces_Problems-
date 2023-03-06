#include <stdio.h>
int main()
{
    int t, h, m, time, left;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        h = 0, m = 0, left = 0, time = 0;
        scanf("%d %d", &h, &m);
        time = (h * 60) + m;
        left = 1440 - time;
        printf("%d\n", left);
    }
    return 0;
}