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
        ll v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, v + n, greater<ll>());
        ll ans = 0, sum = 0;
        for (int i = 1; i < n; i++)
        {
            ans = v[0] * v[i];
            v[0] = ans;
            v[i] = 1;
        }
        ll sum1 = accumulate(v, v + n, sum);
        cout << sum1 * 2022 << endl;
    }

    return 0;
}