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
        map<ll, ll> mp;
        for (ll i = 2; i * i <= n; i++)
        {
            int cnt = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    cnt++;
                    n /= i;
                    if (mp.find(cnt) != mp.end())
                    {
                        mp[cnt] *= i;
                    }
                    else
                    {
                        mp[cnt] = i;
                    }
                }
            }
        }
        if (n > 1)
        {
            if (mp.find(1) != mp.end())
            {
                mp[1] *= n;
            }
            else
            {
                mp[1] = n;
            }
        }
        int ans = 0;
        for (auto x : mp)
        {
            ans += x.second;
        }
        cout << ans << endl;
    }

    return 0;
}