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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> prefa(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefb(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                prefa[i + 1][c] = prefa[i][c];
                prefb[i + 1][c] = prefb[i][c];
            }
            prefa[i + 1][a[i] - 'a']++;
            prefb[i + 1][b[i] - 'a']++;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            int ans = 0;

            for (int c = 0; c < 26; c++)
            {
                ans += abs((prefa[r + 1][c] - prefa[l][c]) - ((prefb[r + 1][c] - prefb[l][c])));
            }

            cout << ans / 2 << endl;
        }
    }

    return 0;
}
