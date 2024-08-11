/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        int n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n <= k)
        {
            cout << 1 << endl;
        }
        else
        {
            int reduce = k - 1;
            int ans = ceil((float)(n - 1) / reduce);
            cout << ans << endl;
        }
    }

    return 0;
}