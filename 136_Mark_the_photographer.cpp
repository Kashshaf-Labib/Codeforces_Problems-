#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> n >> x;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + (2 * n));
        for (int i = 0; i < n; i++)
        {
            if (arr[i + n] - arr[i] >= x)
            {
                c++;
            }
        }
        if (c == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}