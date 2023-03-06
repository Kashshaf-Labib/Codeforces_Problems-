/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        ll a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        ll x1 = a1 + a2 + a3 + a4 + a5;
        ll x2 = c1 + c2 + c3;
        if (c1 < a1 || c2 < a2 || c3 < a3)
        {
            cout << "NO" << endl;
        }
        else if (x1 > x2)
        {
            cout << "NO" << endl;
        }
        else if (a1 + a3 + a4 > c1 + c3 || a2 + a3 + a5 > c2 + c3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}