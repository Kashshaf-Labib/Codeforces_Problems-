/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getSum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll sum1 = 0, sum2 = 0;
        sum1 = getSum(k);
        sum2 = getSum(n) - getSum(n - k);
        if (x < sum1 or x > sum2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}