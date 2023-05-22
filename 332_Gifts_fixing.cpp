/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        ll ans = 0;

        ll m1 = *min_element(v1.begin(), v1.end());
        ll m2 = *min_element(v2.begin(), v2.end());

        for (int i = 0; i < n; i++)
        {
            if (v1[i] != m1 && v2[i] != m2)
            {
                ll x1 = v1[i] - m1;
                ll x2 = v2[i] - m2;
                if (x2 > x1)
                {
                    ans += x1 + (x2 - x1);
                }
                else
                {
                    ans += x2 + (x1 - x2);
                }
            }
            else if (m1 == v1[i] && m2 != v2[i])
            {
                ans += v2[i] - m2;
            }
            else if (m2 == v2[i] && m1 != v1[i])
            {
                ans += v1[i] - m1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}