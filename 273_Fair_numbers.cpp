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
        ll n;
        cin >> n;
        for (ll i = n;; i++)
        {
            int flag = 0;
            ll dig = i, rem;
            while (dig != 0)
            {
                rem = dig % 10;
                if (rem != 0 && i % rem != 0)
                {
                    flag = 1;
                    break;
                }
                dig = dig / 10;
            }
            if (flag == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}