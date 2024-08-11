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
        vector<int> v(3);

        int sum = 0, ans = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());
            while (v[1] != 0)
            {
                ans++;
                v[0]--;
                v[1]--;
                sort(v.begin(), v.end(), greater<int>());
            }

            cout << ans << endl;
        }
    }

    return 0;
}