/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    set<string> s;
    int n, c = 0;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        string cat = s1 + " " + s2;
        s.insert(cat);
    }
    cout << s.size() << endl;
    return 0;
}