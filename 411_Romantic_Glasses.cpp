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
        bool flag = false;
        vector<int> v(n + 1);
        unordered_map<ll, ll> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll es = 0, os = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                es += v[i];
            }
            else
            {
                os += v[i];
            }

            ll diff = os - es;

            if (diff == 0 or mp.find(diff) != mp.end())
            {
                flag = true;
                break;
            }
            mp[diff] = i;
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}