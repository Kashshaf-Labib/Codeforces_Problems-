/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1007;
string a, b;
int dp[N][N];

int lcsModified(int i, int j)
{
    if (i >= a.size() || j >= b.size())
    {
        return 0;
    }
    // if (dp[i][j] != -1)
    // {
    //     return dp[i][j];
    // }

    int ans = 0;

    if (a[i] == b[j])
    {
        ans = 1 + lcsModified(i + 1, j + 1);
    }
    else
    {
        ans = lcsModified(i, j + 1);
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
        memset(dp, -1, sizeof(dp));
        int n, m;
        cin >> n >> m;
        cin >> a >> b;

        cout << lcsModified(0, 0) << endl;
    }

    return 0;
}