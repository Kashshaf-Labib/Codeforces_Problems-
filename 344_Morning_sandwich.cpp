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
        int b, c, h, ans;
        cin >> b >> c >> h;
        int f = c + h;
        if (b - 2 >= f - 1)
        {
            ans = f + (f - 1) + 2;
        }
        else
        {
            ans = b + b - 1;
        }
        cout << ans << endl;
    }

    return 0;
}