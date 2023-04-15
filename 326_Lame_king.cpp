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
        int a, b;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        int ans = a + b;
        int diff = max(a, b) - min(a, b);
        ans += max(0, diff - 1);
        cout << ans << endl;
    }

    return 0;
}