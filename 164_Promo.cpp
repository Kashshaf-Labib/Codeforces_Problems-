#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    long long n, q, x, y;
    cin >> n >> q;
    vector<long long> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end(), greater<long long>());
    v.insert(v.begin(), 0);
    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << v[x] - v[x - y] << endl;
    }
    return 0;
}