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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        while (i < n)
        {
            if (i <= n - 5 and s.substr(i, 5) == "mapie")
            {
                ans++;
                i += 5;
            }
            else if (i <= n - 3 and (s.substr(i, 3) == "pie" or s.substr(i, 3) == "map"))
            {
                ans++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
