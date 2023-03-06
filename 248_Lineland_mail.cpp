/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll max = 0, min = 0, max1 = 0, max2 = 0, min1 = 0, min2 = 0;
        if (i == 0)
        {
            min = abs(v[i] - v[i + 1]);
            max = abs(v[i] - v[n - 1]);
            cout << min << " " << max << endl;
        }
        else if (i == n - 1)
        {
            min = v[i] - v[n - 2];
            max = abs(v[i] - v[0]);
            cout << min << " " << max << endl;
        }
        else
        {
            min1 = abs(v[i] - v[i - 1]);
            min2 = abs(v[i] - v[i + 1]);
            if (min1 < min2)
                cout << min1 << " ";
            else
                cout << min2 << " ";
            max1 = abs(v[i] - v[n - 1]);
            max2 = abs(v[i] - v[0]);
            if (max1 > max2)
                cout << max1 << endl;
            else
                cout << max2 << endl;
        }
    }

    return 0;
}