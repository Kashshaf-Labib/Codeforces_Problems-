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
    s = s + 'x';
    int exist = 0, vi = 0, pi = 0, c = 0, maxc = -100;

    for (int i = 0; i < s.size(); i++)
    {
        if (exist == 0)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                exist = 1;
                vi = i;
                maxc = vi + 1;
            }
        }
        else if (exist == 1)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                pi = vi;
                vi = i;
                c = vi - pi;
                if (c >= maxc)
                {
                    maxc = c;
                }
            }
            else if (s[i] == 'x')
            {
                c = i - vi;
                if (c >= maxc)
                {
                    maxc = c;
                }
            }
        }
    }
    if (exist == 1)
    {
        cout << maxc << endl;
    }
    else if (exist == 0)
    {
        cout << s.length() << endl;
    }

    return 0;
}