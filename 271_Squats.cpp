/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, sd = 0, su = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            sd++;
        }
        else if (s[i] == 'X')
        {
            su++;
        }
    }
    if (sd > su)
    {
        cout << n / 2 - min(sd, su) << endl;
        for (int i = 0; i < n; i++)
        {
            if (su == sd)
            {
                break;
            }
            if (s[i] == 'x')
            {
                s[i] = 'X';
                su++;
                sd--;
            }
        }
        cout << s << endl;
    }
    else if (sd < su)
    {
        cout << n / 2 - min(sd, su) << endl;
        for (int i = 0; i < n; i++)
        {
            if (sd == su)
            {
                break;
            }
            if (s[i] == 'X')
            {
                s[i] = 'x';
                sd++;
                su--;
            }
        }
        cout << s << endl;
    }
    else if (sd == su)
    {
        cout << "0" << endl;
        cout << s << endl;
    }

    return 0;
}