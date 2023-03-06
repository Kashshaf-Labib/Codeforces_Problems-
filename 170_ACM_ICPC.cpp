#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(6);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    if (v[0] + v[1] + v[2] == v[3] + v[4] + v[5] || v[0] + v[1] + v[3] == v[2] + v[4] + v[5] || v[0] + v[1] + v[4] == v[2] + v[3] + v[5] || v[0] + v[1] + v[5] == v[2] + v[3] + v[4] || v[0] + v[2] + v[3] == v[1] + v[4] + v[5] || v[0] + v[2] + v[4] == v[1] + v[3] + v[5] || v[0] + v[2] + v[5] == v[1] + v[3] + v[4] || v[0] + v[3] + v[4] == v[1] + v[2] + v[5] || v[0] + v[3] + v[5] == v[1] + v[2] + v[4] || v[0] + v[4] + v[5] == v[1] + v[2] + v[3])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}