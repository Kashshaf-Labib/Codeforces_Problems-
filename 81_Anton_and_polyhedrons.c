#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    char p[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &p);
        if (p[0] == 'T')
            c = c + 4;
        if (p[0] == 'C')
            c = c + 6;
        if (p[0] == 'O')
            c = c + 8;
        if (p[0] == 'D')
            c = c + 12;
        if (p[0] == 'I')
            c = c + 20;
    }
    printf("%d", c);
    return 0;
}