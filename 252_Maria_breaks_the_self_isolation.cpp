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
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int flag = 0, ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] <= i + 1)
            {
                flag = 1;
                ans = i + 2;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "1" << endl;
        }
        else if (flag == 1)
        {
            cout << ans << endl;
        }
    }

    return 0;
}