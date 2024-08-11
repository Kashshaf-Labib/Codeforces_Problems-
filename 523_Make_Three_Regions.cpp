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
        int n;
        cin >> n;

        vector<string> x(2);

        for (int i = 0; i < 2; i++)
        {
            cin >> x[i];
        }

        int ans = 0;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 and j < n - 2)
                {
                    if (x[i][j] == 'x' and x[i][j + 1] == '.' and x[i][j + 2] == 'x' and x[i + 1][j + 1] == '.' and x[i + 1][j] == '.' and x[i + 1][j + 2] == '.')
                    {
                        ans++;
                    }
                    else if (x[i][j] == '.' and x[i][j + 1] == '.' and x[i][j + 2] == 'x' and x[i + 1][j + 1] == 'x' and x[i + 1][j] == '.' and x[i + 1][j + 2] == '.')
                    {
                        ans++;
                    }
                    else if (x[i][j] == 'x' and x[i][j + 1] == '.' and x[i][j + 2] == '.' and x[i + 1][j + 1] == 'x' and x[i + 1][j] == '.' and x[i + 1][j + 2] == '.')
                    {
                        ans++;
                    }
                }

                else if (i == 1 and j < (n - 2))
                {
                    if (x[i][j] == 'x' and x[i][j + 1] == '.' and x[i][j + 2] == 'x' and x[i - 1][j + 1] == '.' and x[i - 1][j] == '.' and x[i - 1][j + 2] == '.')
                    {
                        ans++;
                    }
                    else if (x[i][j] == '.' and x[i][j + 1] == '.' and x[i][j + 2] == 'x' and x[i - 1][j + 1] == 'x' and x[i - 1][j] == '.' and x[i - 1][j + 2] == '.')
                    {
                        ans++;
                    }
                    else if (x[i][j] == 'x' and x[i][j + 1] == '.' and x[i][j + 2] == '.' and x[i - 1][j + 1] == 'x' and x[i - 1][j] == '.' and x[i - 1][j + 2] == '.')
                    {
                        ans++;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}