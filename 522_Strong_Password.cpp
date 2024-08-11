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
        string s;
        cin >> s;

        bool matchFound = false;
        int ind = -1;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                matchFound = true;
                ind = i;
                break;
            }
        }

        if (!matchFound)
        {
            char x = s[s.size() - 1];
            if (x == 'z')
            {
                x = 'a';
            }
            else
            {
                x++;
            }
            s += x;
            cout << s << endl;
        }
        else
        {
            string s1 = s.substr(0, ind + 1);
            string s2 = s.substr(ind + 1, s.size() - ind - 1);
            char x = s[ind];
            if (x == 'z')
            {
                x = 'a';
            }
            else
            {
                x++;
            }
            s1 += x;
            s = s1 + s2;

            cout << s << endl;
        }
    }
    return 0;
}