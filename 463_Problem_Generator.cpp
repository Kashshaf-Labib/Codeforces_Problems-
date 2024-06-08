/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        map<char, int> mp;

        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        for (auto x : mp)
        {
            if (x.second < m)
            {
                ans += m - x.second;
            }
        }
        if (mp.size() < 7)
        {
            ans += (7 - mp.size()) * m;
        }

        cout << ans << endl;
    }

    return 0;
}