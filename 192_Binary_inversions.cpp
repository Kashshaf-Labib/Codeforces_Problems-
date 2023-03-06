/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll func(vector<ll> v, int n)
{
    ll tot = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            sum1++;
        else
            tot = tot + sum1;
    }
    return tot;
}
int main()

{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        ll ans = func(v, n);
        int ind = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                ind = i;
                break;
            }
        }
        ans = max(ans, func(v, n));
        if (ind != -1)
        {
            v[ind] = 0;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }
        ans = max(ans, func(v, n));
        cout << ans << endl;
    }

    return 0;
}