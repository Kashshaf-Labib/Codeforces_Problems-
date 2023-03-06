/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int prefsum[n];
    prefsum[0] = arr1[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + arr1[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto ans = lower_bound(prefsum, prefsum + n, x) - prefsum; //Usage of lowerbound function
        cout << ans + 1 << endl;
    }

    return 0;
}