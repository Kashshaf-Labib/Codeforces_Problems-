/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 9;
ll arr[N], p[N];
bool vis[N];

ll sumP(ll n, ll k, ll pb)
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }

    ll sum = 0, x = pb, ans = 0;

    for (ll i = 0; i < k; i++)
    {
        if (vis[x])
        {
            break;
        }
        vis[x] = 1;
        ll tempans = sum + ((k - i) * arr[x]);
        ans = max(ans, tempans);
        sum += arr[x];
        x = p[pb];
        pb = p[pb];
    }

    return ans;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, pb, ps;
        cin >> n >> k >> pb >> ps;

        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        // cout << max(sumP(n, k, pb), sumP(n, k, ps)) << endl;
        if (sumP(n, k, pb) > sumP(n, k, ps))
        {
            cout << "Bodya" << endl;
        }
        else if (sumP(n, k, pb) < sumP(n, k, ps))
        {
            cout << "Sasha" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}