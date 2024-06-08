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
        int n, l, r;
        cin >> n >> l >> r;
        vector<ll> ans;
        ans.push_back(l);
        int cnt = 1;

        for (int i = 2; i <= n; i++)
        {
            if (l % i == 0)
            {
                ans.push_back(l);
                cnt++;
            }
            else
            {
                ll x = l / i;
                x = (x + 1) * i;
                if (x >= l and x <= r)
                {
                    ans.push_back(x);
                    cnt++;
                }
            }
        }
        if (cnt < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}