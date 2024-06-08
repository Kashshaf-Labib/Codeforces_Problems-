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
        ll n, m;
        cin >> n >> m;
        ll a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        ll ans = 0;

        for (int i = n; i >= m + 1; i--)
        {
            ans += min(a[i], b[i]);
        }

        ll bmpref[m + 1] = {0};

        for (int i = m; i >= 1; i--)
        {
            if (i == m)
            {
                bmpref[i] = 0;
            }
            else
            {
                bmpref[i] = bmpref[i + 1] + b[i + 1];
            }
        }

        ll newb[m + 1] = {0};

        for (int i = 1; i <= m; i++)
        {
            newb[i] = a[i] + bmpref[i];
        }


        ll ans2 = 1e9 + 7;

        for (int i = m; i >= 1; i--)
        {
            ans2 = min(ans2, newb[i]);
        }

         cout << ans + ans2 << endl;
    }

    return 0;
}