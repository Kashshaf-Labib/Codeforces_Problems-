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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 1;

        for (int j = 0; j < 22; j++)
        {
            vector<int> setBits;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] & (1 << j))
                {
                    setBits.push_back(i);
                }
            }

            int mx = 0, ind = -1;

            for (auto it : setBits)
            {
                mx = max(mx, it - ind);
                ind = it;
            }
            mx = max(mx, n - ind);
            if (ind != -1)
            {
                ans = max(ans, mx);
            }
        }

        cout << ans << endl;
    }

    return 0;
}