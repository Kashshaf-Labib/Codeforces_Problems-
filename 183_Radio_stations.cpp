/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    map<string, string> mp;
    int n, m;
    string name, ip;
    string name1, ip1;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> name1 >> ip1;
        ip1.pop_back();
        cout << name1 << " " << ip1 << "; #" << mp[ip1] << endl;
    }
    return 0;
}