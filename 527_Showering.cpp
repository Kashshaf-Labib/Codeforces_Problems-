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
        ll n, s, m;
        cin >> n >> s >> m;

        vector<pair<ll, ll>> times(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> times[i].first >> times[i].second;
        }

        bool canShower = false;

        if (times[0].first >= s)
        {
            canShower = true;
        }

        for (int i = 1; i < n; ++i)
        {
            if (times[i].first - times[i - 1].second >= s)
            {
                canShower = true;
            }
        }

        if (m - times[n - 1].second >= s)
        {
            canShower = true;
        }

        if (canShower)
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