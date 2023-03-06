/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, mid, ind, ans = 0;
        cin >> n;
        mid = (n / 2) + 1;
        ind = mid - 1;
        ans = ((ind * (ind + 1) * (2 * ind + 1)) / 6) * 8;
        cout << ans << endl;
    }

    return 0;
}