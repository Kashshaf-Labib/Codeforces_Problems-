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
        ll ans1 = 0, ans2 = 0;
        ll a, b, c;
        cin >> a >> b >> c;
        if (a >= c)
        {
            ans1 = -1;
        }
        else if (a < c)
        {
            ans1 = 1;
        }
        if (a * b <= c)
        {
            ans2 = -1;
        }
        else if (a * b > c)
        {
            ans2 = b;
        }
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}