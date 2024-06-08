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
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool zo = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' and s[i + 1] == '1')
            {
                zo = true;
                break;
            }
            else if (s[i] == '1' and s[i + 1] == '0')
            {
                zo = false;
                break;
            }
        }
        int okay = 0;
        if (zo)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '0' and s[i + 1] == '1')
                {
                    okay++;
                }
            }
            cout << (n / 2) - okay << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' and s[i + 1] == '0')
                {
                    okay++;
                }
            }

            cout << (n / 2) - okay << endl;
        }
    }

    return 0;
}