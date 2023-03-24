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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll cn = 0;
        if (d < b)
        {
            cout << -1 << "\n";
            continue;
        }
        while (b != d)
        {
            cn++;
            b++;
            a++;
        }
        if (c > a)
        {
            cout << -1 << "\n";
            continue;
        }
        while (a != c)
        {
            cn++;
            a--;
        }
        cout << cn << endl;
    }

    return 0;
}