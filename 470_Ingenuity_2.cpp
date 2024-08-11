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

        string s;
        cin >> s;

        int x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                y++;
            }
            else if (s[i] == 'S')
            {
                y--;
            }
            else if (s[i] == 'E')
            {
                x++;
            }
            else if (s[i] == 'W')
            {
                x--;
            }
        }

        if (x % 2 != 0 or y % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (n == 2 and x == 0 and y == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int north = 0, south = 0, east = 1, west = 1;
            char m[2] = {'R', 'H'};

            string ans = "";

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    ans += m[north];
                    north = 1 - north;
                }
                else if (s[i] == 'S')
                {
                    y--;
                    ans += m[south];
                    south = 1 - south;
                }
                else if (s[i] == 'E')
                {
                    x++;
                    ans += m[east];
                    east = 1 - east;
                }
                else if (s[i] == 'W')
                {
                    x--;
                    ans += m[west];
                    west = 1 - west;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}