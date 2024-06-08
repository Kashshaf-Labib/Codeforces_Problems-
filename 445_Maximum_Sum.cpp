/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;

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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll sum = 0;

        ll maxSum = 0;

        ll wholeSum = 0;

        for (int i = 0; i < n; i++)
        {
            // sum = ((sum % mod) + (v[i] % mod)) % mod;
            sum += v[i];
            maxSum = max(maxSum, sum);
            // cout << maxSum << " ";
            sum = max(sum, 0ll);
        }

        wholeSum = (accumulate(v.begin(), v.end(), 0ll) % mod + mod) % mod;

        for (int i = 1; i <= k; i++)
        {
            wholeSum = (wholeSum + maxSum) % mod;
            maxSum = (maxSum * 2) % mod;
        }

        cout << wholeSum << endl;
    }

    return 0;
}