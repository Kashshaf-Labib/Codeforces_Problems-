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
        string s;
        cin >> s;
        bool okay = true;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'c' and s[i + 1] == 'a')
            {
                okay = false;
            }
        }
        if (!okay)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}