/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        char transpose[m][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                transpose[j][i] = arr[i][j];
            }
        }
        
        string ans = "";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (transpose[i][j] == 'v')
                {
                    if (ans.empty())
                    {
                        ans += 'v';
                        break;
                    }
                }
                else if (transpose[i][j] == 'i')
                {
                    if (ans == "v")
                    {
                        ans += 'i';
                        break;
                    }
                }
                else if (transpose[i][j] == 'k')
                {
                    if (ans == "vi")
                    {
                        ans += 'k';
                        break;
                    }
                }
                else if (transpose[i][j] == 'a')
                {
                    if (ans == "vik")
                    {
                        ans += 'a';
                        break;
                    }
                }
            }
        }
        if (ans == "vika")
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