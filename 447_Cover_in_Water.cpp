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

        bool found = false;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '.' and s[i - 1] == '.' and s[i + 1] == '.')
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << 2 << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}