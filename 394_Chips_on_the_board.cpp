/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int inf = 1e9 + 7;
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
        ll a[n + 1];
        ll b[n + 1];
        ll minna = inf, minnb = inf;
        ll suma = 0, sumb = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            suma += a[i];
            if (a[i] < minna)
            {
                minna = a[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            sumb += b[i];
            if (b[i] < minnb)
            {
                minnb = b[i];
            }
        }

        cout << min(suma + (minnb * n), sumb + (minna * n)) << endl;
    }

    return 0;
}