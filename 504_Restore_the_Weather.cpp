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

        vector<pair<int, int>> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }

        sort(a.begin(), a.end());

        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        sort(b.begin(), b.end());

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}