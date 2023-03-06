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
        int n, h, m, t;
        ll ans = 10000;
        cin >> n >> h >> m;
        t = (h * 60) + m;
        for (int i = 0; i < n; i++)
        {
            int hw, mw, tw;
            ll temp;
            cin >> hw >> mw;
            tw = (hw * 60) + mw;
            if (tw < t)
            {
                temp = 1440 - t + tw;
            }
            else if (tw >= t)
            {
                temp = tw - t;
            }
            ans = min(ans, temp);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}