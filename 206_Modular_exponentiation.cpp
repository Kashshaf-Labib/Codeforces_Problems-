/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    if (n / 2 > m)
        cout << m << endl;
    else
    {
        ll x = pow(2, n);
        cout << m % x << endl;
    }
    return 0;
}