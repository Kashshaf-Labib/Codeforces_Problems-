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
        int k;
        cin >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < 13; i++)
        {
            int x;
            cin >> x;
            mp['A' + i] = x;
        }
        for (int i = 0; i < s.size(); i++)
        {
            mp.erase(s[i]);
        }
        int maxx = -100;
        char ans;
        for (auto it : mp)
        {
            maxx = max(maxx, it.second);
            if (maxx == it.second)
            {
                ans = it.first;
            }
        }
        cout << ans << endl;
    }

    return 0;
}