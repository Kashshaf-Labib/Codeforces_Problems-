/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 7;
bool vis[N];
vector<int> g[N];
int cost[N];
int minincomp;
ll ans;

void dfs(int u)
{
    vis[u] = true;

    if (cost[u] < minincomp)
    {
        minincomp = cost[u];
    }

    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            minincomp = inf;
            dfs(i);
            ans += minincomp;
        }
    }

    cout << ans << endl;

    return 0;
}