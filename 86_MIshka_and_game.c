#include <stdio.h>
int main()
{
    int n, m, c, mc = 0, cc = 0, mc1 = 0, cc1 = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &m, &c);
        if (m > c)
            mc++;
        else if (c > m)
            cc++;
        else
        {
            mc++;
            cc++;
        }
        mc1 = mc1 + mc;
        cc1 = cc1 + cc;
        mc = 0;
        cc = 0;
    }
    if (mc1 > cc1)
        printf("Mishka");
    else if (cc1 > mc1)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}