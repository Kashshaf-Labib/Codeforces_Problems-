#include <stdio.h>
int main()
{
    int n, total = 0, m = 0, coin = 0, temp;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        m = m + arr[i];
        coin++;
        if (m > (total / 2))
            break;
        
    }
    printf("%d", coin);

    return 0;
}