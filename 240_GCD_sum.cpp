/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sumdig(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll digsum = sumdig(n);
        ll cheg = gcd(n, digsum);
        while (cheg == 1)
        {
            n = n + 1;
            cheg = gcd(n, sumdig(n));
        }
        cout << n << endl;
    }

    return 0;
}