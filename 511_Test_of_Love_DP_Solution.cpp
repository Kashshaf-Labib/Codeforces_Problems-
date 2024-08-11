/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
ll dp[N];

ll n, m, k;
string s;

ll totalSwim(int currPos) // currPos theke rightbank aey jaite aar koto swim laagbe
{
    if (dp[currPos] != -1)
    {
        return dp[currPos];
    }
    if (s[currPos] == 'C') // can never reach right bank
    {
        return INT_MAX;
    }
    if (currPos >= n - 1) // reached right bank of the river so no need to swim anymore
    {
        return 0;
    }

    ll ans = INT_MAX;

    if (s[currPos] == 'W')
    {
        return (1 + totalSwim(currPos + 1));
    }
    if (s[currPos] == 'L')
    {
        for (int i = currPos + 1; i <= currPos + m; i++)
        {
            ans = min(ans, totalSwim(i));
        }
    }

    return dp[currPos] = ans;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof dp);
        cin >> n >> m >> k;
        n += 2;
        cin >> s;
        s = "L" + s + "L";

        if (totalSwim(0) <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}