/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    ll n, ans;
    string s;
    while (t--)
    {
        ans = 0;
        cin >> n;
        cin >> s;
        ll x[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                ans = ans + i;
            }
            else
            {
                ans = ans + n - i - 1;
            }
            if (s[i] == 'L')
            {
                x[i] = n - i - 1 - i;
            }
            else
            {
                x[i] = i - (n - i - 1);
            }
        }
        sort(x, x + n);
        reverse(x, x + n);
        for (int i = 0; i < n; i++)
        {
            if (x[i] > 0)
            {
                ans += x[i];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}