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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int cnt = 0, mid = -1;

        if (n % 2 == 0)
        {
            mid = (n / 2) - 1;
        }
        else
        {
            mid = (n / 2);
        }

        //cout << mid << endl;
        int midVal = v[mid];

        for (int i = mid; i < n; i++)
        {
            if (v[i] == midVal)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}