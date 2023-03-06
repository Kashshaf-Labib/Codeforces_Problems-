#include <stdio.h>
int main()
{
    int n, m, x, c = 0;
    scanf("%d %d", &n, &m);
    x = n * m;
    char col[x + 1];
    for (int i = 0; i < x; i++)
    {
        scanf("%s", &col[i]);
        if (col[i] == 'C' || col[i] == 'M' || col[i] == 'Y')
            c++;
    }
    if (c >= 1)
        printf("#Color\n");
    else
        printf("#Black&White\n");
    return 0;
}