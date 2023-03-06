#include <stdio.h>
int main()
{
    int n, indodd = 0, indeven = 0, codd = 0, ceven = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            codd++;
            indodd = i;
        }
        else if (arr[i] % 2 == 0)
        {
            ceven++;
            indeven = i;
        }
    }
    if (ceven > codd)
        printf("%d", indodd);
    else
        printf("%d", indeven);
    return 0;
}