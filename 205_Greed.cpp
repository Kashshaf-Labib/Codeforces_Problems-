/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll arr[n], a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<ll>());
    if (sum <= arr[0] + arr[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}