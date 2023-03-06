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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if ((b * k) > s || (s > ((b * k) + (n * (k - 1)))))
        {
            cout << -1 << endl;
        }
        else
        {
            s = s - (b * k);
            for (ll i = 0; i < n - 1; i++)
            {
                cout << min(s, k - 1) << " ";
                s -= min(s, k - 1);
            }
            cout << s + (b * k) << endl;
        }
    }

    return 0;
}