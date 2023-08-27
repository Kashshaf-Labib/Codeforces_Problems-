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
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        ll temp = min(m / k, ak);
        ll left = m - (temp * k);
        left -= a1;
        if (left <= 0)
        {
            cout << 0 << endl;
        }
        else if (left % k == 0)
        {
            cout << left / k << endl;
        }
        else
        {
            ll ans = ((left / k) + (left % k));
            if (a1 >= (k - (left % k)))
            {
                ll ans2 = (left / k) + 1;
                ans = min(ans, ans2);
            }
            cout << ans << endl;
        }
    }

    return 0;
}