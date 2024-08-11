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

        string s;
        cin >> s;

        int arr[m + 1];

        for (int i = 1; i <= m; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + m + 1);

        string c;
        cin >> c;

        sort(c.begin(), c.end());

        map<int, char> mp;

        int x = 0;

        for (int i = 1; i <= m; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = c[x++];
            }
        }


        for (int i = 1; i <= m; i++)
        {
            s[arr[i] - 1] = mp[arr[i]];
        }

        cout << s << endl;
    }

    return 0;
}