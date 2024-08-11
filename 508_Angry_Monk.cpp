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

        vector<int> a(k);

        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = n - a[k - 1];

        for (int i = 0; i < k - 1; i++)
        {
            ans += (a[i] - 1);
        }
        cout << ans << endl;
    }

    return 0;
}