/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        string s, t;
        cin >> s >> t;

        int j = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (j < t.size() && (s[i] == '?' || s[i] == t[j]))
            {

                s[i] = t[j++];
            }
        }

        if (j < t.size())
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int i = 0; i < s.size(); ++i)
            {
                if (s[i] == '?')
                {
                    s[i] = 'x';
                }
            }
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}