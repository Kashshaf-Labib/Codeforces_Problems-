/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll bmax = v[0] - v[n - 1];
    ll max = count(v.begin(), v.end(), v[0]);
    ll min = count(v.begin(), v.end(), v[n - 1]);
    if (bmax != 0)
    {
        cout << bmax << " " << max * min << endl;
    }
    else if (bmax == 0)
    {
        ll ans = (max * (max - 1)) / 2;
        cout << bmax << " " << ans << endl;
    }

    return 0;
}