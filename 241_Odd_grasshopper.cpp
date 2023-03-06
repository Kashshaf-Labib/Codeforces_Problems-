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
        ll x, n;
        cin >> x >> n;
        if (!(n % 4))
        {
            cout << x << endl;
            continue;
        }
        else
        {
            if (x % 2 == 0) // even
            {
                if (n % 4 == 1)
                {
                    cout << x - n << endl;
                    continue;
                }
                else if (n % 4 == 2)
                {
                    cout << x + 1 << endl;
                    continue;
                }
                else if (n % 4 == 3)
                {
                    cout << x + n + 1 << endl;
                    continue;
                }
            }
            else if (x % 2 != 0) // odd
            {
                if (n % 4 == 1)
                {
                    cout << x + n << endl;
                    continue;
                }
                else if (n % 4 == 2)
                {
                    cout << x - 1 << endl;
                    continue;
                }
                else if (n % 4 == 3)
                {
                    cout << x - n - 1 << endl;
                    continue;
                }
            }
        }
    }

    return 0;
}