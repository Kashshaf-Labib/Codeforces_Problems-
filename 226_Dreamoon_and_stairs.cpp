/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ans;
    cin >> n >> m;
    if (n < m)
    {
        cout << "-1" << endl;
    }
    else
    {
        ans = n / 2;
        if (n % 2 == 0)
        {

            if (ans % m == 0)
                cout << ans << endl;
            else
            {
                while (ans % m != 0)
                {
                    ans += 1;
                }
                cout << ans << endl;
            }
        }
        else if (n % 2 != 0)
        {
            ans = (n / 2) + 1;
            if (ans % m == 0)
                cout << ans << endl;
            else
            {
                while (ans % m != 0)
                {
                    ans += 1;
                }
                cout << ans << endl;
            }
        }
    }

    return 0;
}