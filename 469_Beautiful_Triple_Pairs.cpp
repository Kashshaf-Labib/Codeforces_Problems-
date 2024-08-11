/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        ll n;
        cin >> n;

        ll arr[n + 1];

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;

        map<tuple<ll, ll, ll>, ll> mp;

        for (int i = 1; i <= n - 2; i++)
        {
            ans += mp[{arr[i], arr[i + 1], 0}] + mp[{arr[i], 0, arr[i + 2]}] + mp[{0, arr[i + 1], arr[i + 2]}];

            mp[{arr[i], arr[i + 1], 0}]++;
            mp[{arr[i], 0, arr[i + 2]}]++;
            mp[{0, arr[i + 1], arr[i + 2]}]++;
            mp[{arr[i], arr[i + 1], arr[i + 2]}]++;
        }

        cout << ans << endl;
    }
    return 0;
}