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

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                a[i][j] = x - '0';
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                b[i][j] = x - '0';
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    int diff = (b[i][j] - a[i][j] + 3) % 3;
                    if (diff != 0)
                    {
                        a[i][j] = b[i][j];
                        if (diff == 1)
                        {
                            a[i + 1][j + 1] += 1;
                            a[i + 1][j + 1] %= 3;
                            a[i + 1][j] += 2;
                            a[i + 1][j] %= 3;
                            a[i][j + 1] += 2;
                            a[i][j + 1] %= 3;
                        }
                        else if (diff == 2)
                        {
                            a[i + 1][j + 1] += 2;
                            a[i + 1][j + 1] %= 3;
                            a[i + 1][j] += 1;
                            a[i + 1][j] %= 3;
                            a[i][j + 1] += 1;
                            a[i][j + 1] %= 3;
                        }
                    }
                }
            }
        }

        bool flag = true;

        for (int j = 0; j < m; j++)
        {
            if (a[n - 1][j] != b[n - 1][j])
            {
                flag = false;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i][m - 1] != b[i][m - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}