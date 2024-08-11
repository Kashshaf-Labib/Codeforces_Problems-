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

        bool openingPending = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '_' and !openingPending)
            {
                openingPending = true;
                s[i] = '(';
            }
            else if (s[i] == '_' and openingPending)
            {
                openingPending = false;
                s[i] = ')';
            }
            else if (s[i] == ')')
            {
                openingPending = false;
            }
            else if (s[i] == '(')
            {
                openingPending = true;
            }
        }

        //cout << s << endl;

        stack<pair<char, int>> stk;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                stk.push({s[i], i});
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                if (!stk.empty())
                {
                    auto x = stk.top();
                    stk.pop();
                    ans += i - x.second;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}