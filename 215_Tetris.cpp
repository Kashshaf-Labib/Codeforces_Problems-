/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll freq[100000] = {0};
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    ll ans = freq[1];
    for (int i = 1; i <= n; i++)
    {
        ans = min(ans, freq[i]);
    }
    cout << ans << endl;

    return 0;
}