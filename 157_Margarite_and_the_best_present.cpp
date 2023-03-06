#include <bits/stdc++.h>
using namespace std;
long long ans(long long a)
{
    if (a % 2 == 0)
        return a / 2;
    else
        return -(a + 1) / 2;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans(r) - ans(l - 1) << endl;
    }

    return 0;
}