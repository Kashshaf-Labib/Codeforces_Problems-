#include <stdio.h>
int main()
{
    int n, r, c = 0;
    scanf("%d", &n);
    r = n;
    while (r != 0)
    {
        if (r >= 100)
        {
            c = c + (r / 100);
            r = r % 100;
        }
        else if (r >= 20 && r < 100)
        {
            c = c + (r / 20);
            r = r % 20;
        }
        else if (r >= 10 && r < 20)
        {
            c = c + (r / 10);
            r = r % 10;
        }
        else if (r >= 5 && r < 10)
        {
            c = c + (r / 5);
            r = r % 5;
        }
        else if (r >= 1 && r < 5)
        {
            c = c + r;
            break;
        }
    }
    printf("%d", c);
    return 0;
}