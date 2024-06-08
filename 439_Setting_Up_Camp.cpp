/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     ll a, b, c;
    //     cin >> a >> b >> c;
    //     ll bx = b % 3;
    //     ll extra = 0;
    //     if (bx != 0)
    //     {
    //         extra = 3 - bx;
    //     }
    //     if (extra > c and extra != 0)
    //     {
    //         cout << -1 << endl;
    //     }
    //     else
    //     {
    //         c -= extra;
    //         b += extra;
    //         ll ans = a;
    //         ans += (b / 3);
    //         if (c % 3 == 0)
    //         {
    //             ans += (c / 3);
    //         }
    //         else
    //         {
    //             ans += (c / 3) + 1;
    //         }
    //         cout << ans << endl;
    //     }
    // }

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = a;

        int rem = b % 3;

        if (rem == 0)
        {
            ans += (b / 3);
            if (c % 3 == 0)
            {
                ans += (c / 3);
            }
            else
            {
                ans += (c / 3) + 1;
            }
            cout << ans << endl;
        }
        else if (c >= 3 - rem)
        {
            c -= (3 - rem);
            b += (3 - rem);
            ans += (b / 3);
            if (c % 3 == 0)
            {
                ans += (c / 3);
            }
            else
            {
                ans += (c / 3) + 1;
            }
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}