#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    if (k == 0)
    {
        if (arr[0] == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[0] - 1 << endl;
        }
        return 0;
    }

    if (n == 1 and k == 0)
    {
        if (arr[0] == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        return 0;
    }

    if (n == k)
    {
        cout << arr[n - 1] << endl;
        return 0;
    }
    if (n > k)
    {
        if (arr[k] == arr[k - 1])
        {
            cout << -1 << endl;
            return 0;
        }
        cout << arr[k - 1] << endl;
    }

    return 0;
}