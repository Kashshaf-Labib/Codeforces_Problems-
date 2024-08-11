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
        ll n, a, b;
        cin >> n >> a >> b;

        ll ind = 0;

        ll l = 1, r = min(n, b);

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if ((b - mid + 1) > a)
            {
                ind = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        //cout << ind << endl;

        ll ans = 0;
        if (ind != 0)
        {
            // ans = ind * (b + (b - ind + 1)) / 2;
            ans += (b * (b + 1)) / 2;
            ans -= (b - ind + 1) * (b - ind) / 2;
            ans += (n - ind) * a;
        }
        else
        {
            ans = n * a;
        }
        cout << ans << endl;
    }

    return 0;
}
