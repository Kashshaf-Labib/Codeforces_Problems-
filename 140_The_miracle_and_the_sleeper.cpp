#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, r, l, ans;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int divby2;
        divby2 = r / 2;
        if (divby2 >= l)
        {
            divby2++;
            ans = r % divby2;
        }
        else if (divby2 < l)
        {
            ans = r % l;
        }
        cout << ans << endl;
    }

    return 0;
}