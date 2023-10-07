/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isOkay(ll arr[], ll x, ll h, ll n)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (h > arr[i])
        {
            cnt += h - arr[i];
        }
    }

    return cnt <= x;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll low = 0;
        ll high = INT_MAX;
        ll ans = INT_MAX;
        while (low <= high)
        {
            ll h = low + ((high - low) / 2);
            if (isOkay(arr, x, h, n))
            {
                ans = h;
                low = h + 1;
            }
            else
            {
                high = h - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}