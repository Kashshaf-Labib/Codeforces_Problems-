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
        string s1, s2;
        cin >> s1 >> s2;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                c1++;
            }
            if (s2[i] == '1')
            {
                c2++;
            }
        }
        if (c1 == 0 or c2 == 0)
        {
            if (c1 == 0)
            {
                cout << c2 << endl;
            }
            else
            {
                cout << c1 << endl;
            }
        }
        else if (c1 > c2)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s1[i] == '1' and s2[i] == '0')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else if (c1 < c2)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s1[i] == '0' and s2[i] == '1')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else if (c1 == c2)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (s1[i] != s2[i])
                {
                    ans++;
                }
            }
            cout << ans / 2 << endl;
        }
    }

    return 0;
}