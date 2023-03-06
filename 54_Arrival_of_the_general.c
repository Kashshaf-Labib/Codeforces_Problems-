#include <stdio.h>
int main()
{
    int n, max = 0, min = 101, ind1, ind2, arr[200], result;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            ind1 = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            ind2 = i;
        }
    }
    if (ind2 < ind1)
        ind2++;
    result = ind1 + (n - 1) - ind2;
    printf("%d", result);
    return 0;
}