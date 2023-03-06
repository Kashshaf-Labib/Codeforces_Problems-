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
        ll ans = 0;
        int a, b, n, x = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (b > 0)
        {
            ans = (a * n) + (b * n);
        }
        else
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    x++;
                }
            }
            x++;
            ans = (a * n) + (x / 2 + 1) * b;
        }
        cout << ans << endl;
    }

    return 0;
}