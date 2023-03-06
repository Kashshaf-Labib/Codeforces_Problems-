/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        vector<int> v2;
        int n, m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        partial_sum(v1.begin(), v1.end(), v1.begin());
        partial_sum(v2.begin(), v2.end(), v2.begin());
        ll x = max(0, *max_element(v1.begin(), v1.end()));
        ll y = max(0, *max_element(v2.begin(), v2.end()));
        cout << x + y << endl;
    }

    return 0;
}