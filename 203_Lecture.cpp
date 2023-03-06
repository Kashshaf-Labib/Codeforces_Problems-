/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    map<string, string> mp;
    int n, m;
    cin >> n >> m;
    string s1, s2;
    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // cout << mp[s] << " ";
        int length1 = s.size();
        int length2 = mp[s].size();
        if (length1 > length2)
            cout << mp[s] << " ";
        else
            cout << s << " ";
    }

    return 0;
}