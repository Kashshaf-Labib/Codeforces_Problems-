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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= q)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        v.push_back(0);
        int cons = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                if (cons >= k)
                {
                    ll abso = cons - k + 1;
                    ans += (abso * (abso + 1)) / 2;
                }
                cons = 0;
            }
            else
            {
                cons++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}