/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, maxx = 0;
    cin >> n;
    string s, maxxsub;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string subs = s.substr(i, 2);
        mp[subs]++;
        if (mp[subs] > maxx)
        {
            maxxsub = subs;
            maxx = mp[subs];
        }
    }
    cout << maxxsub << endl;
    return 0;
}