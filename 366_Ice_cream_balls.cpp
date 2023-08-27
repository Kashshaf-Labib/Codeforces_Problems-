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
        ll n;
        cin >> n;
        ll low = 0;
        ll high = 2e9;
        bool found = false;
        ll ans = -1;
        while (low <= high)
        {
            ll mid = low + ((high - low) / 2);
            if (((mid) * (mid - 1)) / 2 == n)
            {
                found = true;
                ans = mid;
                break;
            }
            else if (((mid) * (mid - 1)) / 2 > n)
            {
                high = mid - 1;
            }
            else if (((mid) * (mid - 1)) / 2 < n)
            {
                low = mid + 1;
            }
        }
        if (found)
        {
            cout << ans << endl;
        }
        else
        {
            low--;
            ll x = (low * (low - 1)) / 2;
            ll ans1 = low + n - x;
            cout << ans1 << endl;
        }
    }

    return 0;
}