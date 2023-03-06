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
        ll s, c = 0, x, left, ans = 0;
        cin >> s;
        while (true)
        {
            x = (s / 10) * 10;
            ans += x;
            left = s - x;
            s = (s / 10) + left;
            if (s < 10)
            {
                ans += s;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}