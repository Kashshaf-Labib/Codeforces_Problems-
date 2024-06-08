#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll mid = sum / n;
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mid)
            {
                x += arr[i] - mid;
            }
            else
            {
                x -= mid - arr[i];
                if (x < 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}