/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int findAns(int arr[], int left, int n)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (left >= arr[i])
        {
            cnt++;
            left -= arr[i];
        }
        else
        {
            break;
        }
    }

    return cnt;
}

signed main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum <= k)
        {
            cout << n << endl;
        }
        else
        {
            int first = (k / 2) + (k % 2);
            int last = k / 2;

            int ans = findAns(arr, first, n);
            reverse(arr, arr + n);

            ans += findAns(arr, last, n);

            cout << ans << endl;
        }
    }

    return 0;
}