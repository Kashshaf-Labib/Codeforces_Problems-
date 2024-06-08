/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 7;
ll arr[N], n, k;

bool okay(ll val)
{
    ll used = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < val)
        {
            used += val - arr[i];
            if (used > k)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        ll low = 1, high = 2e12, mid = -1, mnm = 0;
        while (low <= high)
        {
            mid = (low + (high - low) / 2);
            if (okay(mid))
            {
                mnm = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] < mnm)
            {
                k -= (mnm - arr[i]);
                arr[i] = mnm;
            }
        }
        //cout << mnm << " " << k << endl;

        sort(arr + 1, arr + n + 1);

        for (int i = 1; i <= k; i++)
        {
            arr[i]++;
        }

        ll ans = n * (mnm - 1) + 1;

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > mnm)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}