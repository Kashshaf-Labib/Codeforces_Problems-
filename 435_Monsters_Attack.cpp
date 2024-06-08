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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), x(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> r(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            r[abs(x[i])] += v[i];
        }

        ll power = k;

        bool ans = true;

        for (int i = 1; i <= n; i++)
        {
            if (power < r[i])
            {
                ans = false;
                break;
            }
            power -= r[i];
            power += k;
        }

        if (ans)
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