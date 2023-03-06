/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int c = stoi(s1) + stoi(s2);
    string x = to_string(c);
    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
    x.erase(remove(x.begin(), x.end(), '0'), x.end());
    int ans = stoi(s1) + stoi(s2);
    if (ans == stoi(x))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}