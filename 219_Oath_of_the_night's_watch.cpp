/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, c = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n <= 2)
        cout << "0" << endl;
    else
    {
        sort(v.begin(), v.end());
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[0] && v[i] < v[n - 1])
                c++;
        }
        cout << c << endl;
    }

    return 0;
}