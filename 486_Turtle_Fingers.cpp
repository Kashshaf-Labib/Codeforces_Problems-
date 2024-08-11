/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> divisors(ll n)
{
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
            {
                div.push_back(n / i);
            }
        }
    }
    return div;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l, ans = 0;
        cin >> a >> b >> l;

        vector<ll> divs = divisors(l);
        vector<ll> xvec, yvec;

        for (ll i = 0; i <= 20; i++)
        {
            ll calc = pow(a, i);
            if (calc <= 1e6)
            {
                xvec.push_back(calc);
            }
            else
            {
                break;
            }
        }

        for (ll i = 0; i <= 20; i++)
        {
            ll calc = pow(b, i);
            if (calc <= 1e6)
            {
                yvec.push_back(calc);
            }
            else
            {
                break;
            }
        }

        sort(divs.begin(), divs.end());

        for (ll k = 0; k < divs.size(); k++)
        {
            bool found = false;
            for (ll x = 0; x < xvec.size(); x++)
            {
                for (ll y = 0; y < yvec.size(); y++)
                {
                    if (divs[k] * xvec[x] * yvec[y] == l)
                    {
                        found = true;
                        ans++;
                        break;
                    }
                }
                if (found)
                {
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}