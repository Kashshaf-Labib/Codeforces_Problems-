/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        sum = sum + it;
    }
    sort(v.begin(), v.end(), greater<int>());
    int m, x;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        cout << sum - v[x - 1] << endl;
    }

    return 0;
}