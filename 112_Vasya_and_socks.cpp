#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ans;
    cin >> n >> m;
    ans = n + ((n - 1) / (m - 1));
    cout << ans << endl;
    return 0;
}