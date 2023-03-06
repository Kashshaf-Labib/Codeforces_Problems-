/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, b, d, tot = 0, count = 0;
    cin >> n >> b >> d;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if(x<=b)
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        tot = tot + v[i];
        if (tot > d)
        {
            count++;
            tot = 0;
        }
    }
    cout << count << endl;

    return 0;
}