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

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll sumOp = 0, ans = INT_MAX;
            sumOp = (((sum / 3) + 1) * 3) - sum;

            sort(v.begin(), v.end());

            for (int i = 0; i < n; i++)
            {
                if ((sum - v[i]) % 3 == 0)
                {
                    ans = 1;
                    break;
                }
            }

            cout << min(ans, sumOp) << endl;
        }
    }

    return 0;
}