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
        int n, m;

        cin >> n >> m;

        int arr[n + 1][m + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i > 1 and arr[i][j] <= arr[i - 1][j])
                {
                    continue;
                }
                if (i < n and arr[i][j] <= arr[i + 1][j])
                {
                    continue;
                }
                if (j > 1 and arr[i][j] <= arr[i][j - 1])
                {
                    continue;
                }
                if (j < m and arr[i][j] <= arr[i][j + 1])
                {
                    continue;
                }
                int maxx = -1;

                if (i > 1)
                {
                    maxx = max(maxx, arr[i - 1][j]);
                }
                if (i < n)
                {
                    maxx = max(maxx, arr[i + 1][j]);
                }
                if (j > 1)
                {
                    maxx = max(maxx, arr[i][j - 1]);
                }
                if (j < m)
                {
                    maxx = max(maxx, arr[i][j + 1]);
                }
                arr[i][j] = maxx;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}