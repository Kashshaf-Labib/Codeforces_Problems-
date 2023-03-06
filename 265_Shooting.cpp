/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll ans = 0;
    int n, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], i + 1));
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        ans = ans + ((c * v[i].first) + 1);
        c++;
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << " ";
    }

    return 0;
}