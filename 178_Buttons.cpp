/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long ans;
    ans = n;
    for (int i = n - 1, j = 1; i >= 1; i--, j++)
    {
        ans = ans + (i * j);
    }
    cout << ans << endl;
    return 0;
}