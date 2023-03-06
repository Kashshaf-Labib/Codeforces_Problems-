#include <bits/stdc++.h>
using namespace std;
int ans(int n)
{
    n = n + 1;
    int ans = (n / 2) % 2;
    return ans;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    cout << ans(n) << endl;

    return 0;
}