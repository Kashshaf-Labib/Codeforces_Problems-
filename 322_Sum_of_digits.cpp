/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll count = 0;
    while (s.size() > 1)
    {
        ll x = 0;
        count++;
        for (int i = 0; i < s.size(); i++)
        {
            x += s[i] - '0';
        }
        s = to_string(x);
    }
    cout << count << endl;

    return 0;
}