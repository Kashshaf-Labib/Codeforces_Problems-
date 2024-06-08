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
        int n, m;
        cin >> n;

        int a[n + 1], b[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        cin >> m;

        map<int, int> mp;
        int lastVal = -1;

        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (i == m)
            {
                lastVal = x;
            }
        }

        bool okay = false;

        for (int i = 1; i <= n; i++)
        {
            if (b[i] == lastVal)
            {
                okay = true;
                break;
            }
        }

        if (okay)
        {
            bool okay1 = true;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] != b[i])
                {
                    if (mp[b[i]] > 0)
                    {
                        mp[b[i]]--;
                    }
                    else
                    {
                        okay1 = false;
                        break;
                    }
                }
            }
            if (okay1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}