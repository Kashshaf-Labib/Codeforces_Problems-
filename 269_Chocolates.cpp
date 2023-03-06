/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    ll rmax = v2[n - 1], rans = v2[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (v2[i] >= rmax)
        {
            v2[i] = rmax - 1;
        }
        if (v2[i] <= 0)
        {
            break;
        }
        else if (v2[i] > 0)
        {
            rans += v2[i];
            rmax = v2[i];
        }
    }

    cout << rans << endl;

    return 0;
}