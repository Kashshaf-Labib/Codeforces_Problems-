/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    char str[505][505];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> str[i][j];
            if (str[i][j] == '.')
            {
                str[i][j] = 'D';
            }
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (str[i][j] == 'S' && (str[i][j + 1] == 'W' || str[i][j - 1] == 'W' || str[i + 1][j] == 'W' || str[i - 1][j] == 'W'))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << str[i][j];
        }
        cout << endl;
    }

    return 0;
}