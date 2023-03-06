#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, c = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1])
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == s[i])
                    {
                        c++;
                        break;
                    }
                }
            }
        }
        if (c > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        c = 0;
    }

    return 0;
}