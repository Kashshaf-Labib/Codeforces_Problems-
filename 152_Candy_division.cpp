#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, ans;
        cin >> n >> k;
        ans = n - (n % k);
        ans = ans + min((n % k), (k / 2));
        cout << ans << endl;
    }
    return 0;
}