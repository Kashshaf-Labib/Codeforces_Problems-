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
        int n, m, k;
        cin >> n >> m >> k;

        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        map<int, int> mp1, mp2;

        for (int i = 0; i < m; i++)
        {
            mp1[b[i]]++;
        }

        int cnt = 0, ans = 0;

        for (int i = 0; i < m; i++)
        {
            mp2[a[i]]++;
            if (mp1[a[i]] and mp2[a[i]] <= mp1[a[i]])
            {
                cnt++;
            }
        }

        if (cnt >= k)
        {
            ans++;
        }

        for (int i = 1, j = m; j < n; i++, j++)
        {
            mp2[a[i - 1]]--;
            if (mp1[a[i - 1]] and mp2[a[i - 1]] < mp1[a[i - 1]])
            {
                cnt--;
            }

            mp2[a[j]]++;
            if (mp1[a[j]] and mp2[a[j]] <= mp1[a[j]])
            {
                cnt++;
            }

            if (cnt >= k)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}