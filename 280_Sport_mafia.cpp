/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;

    ll i;
    ll ans = 0;
    for (i = 1; i <= n; i++)
    {
        ans = (i * (i + 1)) / 2;
        if (ans - (n - i) == k)
        {
            break;
        }
    }
    cout << n - i << endl;

    return 0;
}