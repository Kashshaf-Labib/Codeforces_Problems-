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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll maxx = -1, maxxb = -1, suma = 0;
        for (int i = 0; i < n; i++)
        {
            suma += a[i];
            k--;
            maxxb = max(maxxb, b[i]);
            maxx = max(maxx, suma + (k * maxxb));
            if (k == 0)
            {
                break;
            }
        }

        cout << maxx << endl;
    }

    return 0;
}