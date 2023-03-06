#include <stdio.h>
int main()
{
    int n, c = 0, cmax = 0, cmin = 0, c1 = 0, c2 = 0, arr[1020];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    cmax = arr[1];
    cmin = arr[1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = (i + 1); j <= n; j++)
        {
            if (arr[j] > arr[i] || arr[j] < arr[i])
                c = 1;
            if (c == 1)
            {
                if (arr[j] > arr[i] && arr[j] > cmax)
                {
                    cmax = arr[j];
                    c1++;
                }
                else if (arr[j] < arr[i] && arr[j] < cmin)
                {
                    cmin = arr[j];
                    c2++;
                }
            }
            c = 0;
        }
    }
    printf("%d", (c1 + c2));
    return 0;
}