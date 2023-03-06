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
    if (s1 == s2)
        cout << "-1";
    else
    {
        if (s1.size() > s2.size())
        {
            cout << s1.size() << endl;
        }
        else
            cout << s2.size() << endl;
    }

    return 0;
}