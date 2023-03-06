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
        int w, h, n, c = 1;
        cin >> w >> h >> n;
        while (w % 2 == 0)
        {
            w /= 2;
            c *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            c *= 2;
        }
        if (c >= n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}