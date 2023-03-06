/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<int, int> mp;
    int n;
    ll maxx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        y = (x * 60) + y;
        mp[y]++;
        if (mp[y] > maxx)
        {
            maxx = mp[y];
        }
    }
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    cout << maxx << endl;

    return 0;
}