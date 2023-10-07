/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int pattern(int a, int b)
{
    if (a == 0 || a == 9 || b == 0 || b == 9)
    {
        return 1;
    }
    else if (a == 1 || a == 8 || b == 1 || b == 8)
    {
        return 2;
    }
    else if (a == 2 || a == 7 || b == 2 || b == 7)
    {
        return 3;
    }
    else if (a == 3 || a == 6 || b == 3 || b == 6)
    {
        return 4;
    }
    return 5;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        char st[10][10];
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> st[i][j];
                if (st[i][j] == 'X')
                {
                    ans += pattern(i, j);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}