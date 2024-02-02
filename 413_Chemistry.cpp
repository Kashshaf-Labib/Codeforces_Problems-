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
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        if (n - k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int cntOdd = 0;
            for (auto it : mp)
            {
                if (it.second % 2 != 0)
                {
                    cntOdd++;
                }
            }
            if (cntOdd <= k + 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}