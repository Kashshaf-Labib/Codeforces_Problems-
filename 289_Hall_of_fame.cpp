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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int rc = 0;
        int indr = -1;
        int indl = -1;
        int c = 0;
        int indans = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                rc = 1;
                indr = i;
                break;
            }
        }
        if (indr != -1)
        {
            for (int i = indr; i < n; i++)
            {
                if (s[i] == 'L')
                {
                    c = 1;
                }
            }
        }
        if (indr != -1 && c == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'L' && s[i + 1] == 'R')
                {
                    indans = i + 1;
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                cout << indans << endl;
            }
            else if (c == 0)
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}