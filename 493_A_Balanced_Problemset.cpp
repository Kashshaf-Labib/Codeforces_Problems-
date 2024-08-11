/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> divisors(ll n)
{
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
            {
                divs.push_back(n / i);
            }
        }
    }
    return divs;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        if (x % n == 0)
        {
            cout << x / n << endl;
        }
        else
        {
            vector<ll> divs = divisors(x);
            sort(divs.begin(), divs.end());
            ll ans = 1e18;
            for (ll i = divs.size() - 1; i >= 0; i--)
            {
                if (divs[i] * n <= x)
                {
                    ans = divs[i];
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}