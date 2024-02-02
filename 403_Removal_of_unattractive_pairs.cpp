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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        int maxx = -1;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] >= maxx)
            {
                maxx = mp[s[i]];
            }
        }

        // for (auto x : mp)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }

        // cout << maxx << endl;

        if (maxx > n / 2)
        {
            cout << n - (2 * (n - maxx)) << endl;
        }
        else
        {
            int left = n - (maxx * 2);
            if (left & 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}