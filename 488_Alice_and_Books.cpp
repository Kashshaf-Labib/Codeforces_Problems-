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
        deque<int> dq;

        int max = -1, ind = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
            if (x >= max)
            {
                max = x;
                ind = i;
            }
        }

        if (ind == n - 1)
        {
            sort(dq.begin(), dq.end());
            int ans = dq.back();
            dq.pop_back();
            ans += dq.back();
            cout << ans << endl;
        }
        else
        {
            int ans = dq[ind];
            dq.erase(dq.begin() + ind);
            ans += dq.back();

            cout << ans << endl;
        }
    }

    return 0;
}