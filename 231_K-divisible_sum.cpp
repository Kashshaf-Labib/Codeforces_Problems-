/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        ll n, k, ans;
        cin >> n >> k;
        if (n > k)
        {
            if (n % k == 0)
            {
                k = (n / k) * k;
            }
            else if (n % k != 0)
            {
                k = ((n / k) + 1) * k;
            }
        }
        if (k % n == 0)
            ans = k / n;
        else if (k % n != 0)
            ans = (k / n) + 1;

        cout << ans << endl;
    }

    return 0;
}