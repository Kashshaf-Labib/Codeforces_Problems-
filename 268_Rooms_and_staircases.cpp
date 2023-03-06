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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = 0;
        ll ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l = i + 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = n - i;
            }
        }
        if (l != 0 || r != 0)
        {
            ans1 = 2 * l;
            ans2 = 2 * r;
            if (ans1 > ans2)
            {
                cout << ans1 << endl;
            }
            else
            {
                cout << ans2 << endl;
            }
        }
        else
            cout << n << endl;
    }

    return 0;
}