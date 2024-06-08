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
        ll n, m, cnt = 0;
        cin >> n >> m;

        for (ll b = 1; b <= m; b++)
        {
            for (ll a = b; a <= n; a += b)
            {
                if ((a + b) % (b * __gcd(a, b)) == 0)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}