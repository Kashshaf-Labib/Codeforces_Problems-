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
        ll n, x;
        cin >> n >> x;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.rbegin(), v.rend());
        ll add = 0, check, c = 0;
        for (ll i = 0; i < n; i++)
        {
            add = add + v[i];
            check = add / (i + 1);
            if (check < x)
            {
                break;
            }
            else
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}