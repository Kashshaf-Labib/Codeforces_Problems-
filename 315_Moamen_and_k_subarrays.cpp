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
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = i;
        }
        sort(v.begin(), v.end());
        int c = 1;
        int index = mp[v[0]];
        for (int i = 1; i < n; i++)
        {
            if (mp[v[i]] != index + 1)
            {
                c++;
            }
            index = mp[v[i]];
        }
        if (c <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}