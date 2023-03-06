/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> str;
    if (n > 26)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            str.insert(s[i]);
        }
        cout << n - str.size() << endl;
    }

    return 0;
}