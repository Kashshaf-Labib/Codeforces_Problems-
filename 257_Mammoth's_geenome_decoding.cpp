/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n >> s;
    int a = 0, g = 0, c = 0, t = 0;
    if (n % 4)
    {
        cout << "===" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'T')
                t++;
            else if (s[i] == 'G')
                g++;
            else if (s[i] == 'C')
                c++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (a < (n / 4))
                {
                    s[i] = 'A';
                    a++;
                }
                else if (t < (n / 4))
                {
                    s[i] = 'T';
                    t++;
                }
                else if (g < (n / 4))
                {
                    s[i] = 'G';
                    g++;
                }
                else if (c < (n / 4))
                {
                    s[i] = 'C';
                    c++;
                }
            }
        }
    }
    if (a != n / 4 || t != n / 4 || g != n / 4 || c != n / 4)
        cout << "===" << endl;
    else
        cout << s << endl;

    return 0;
}