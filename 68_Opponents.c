#include <stdio.h>
int main()
{
    int n, d, op, c = 0, cons = 0, max = 0;
    scanf("%d %d", &n, &d);
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &op);
            c = c + op;
        }
        if (c != n)
        {
            cons++;
            if (cons > max)
                max = cons;
        }
        else
            cons = 0;
        c = 0;
    }
    printf("%d", max);
    return 0;
}