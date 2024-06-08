/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int numzero = 0, numone = 0;
        int cntzero[n + 1] = {0}, cntone[n + 1] = {0};
        cntzero[0] = 0, cntone[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')
            {
                numzero++;
                cntzero[i] += cntzero[i - 1] + 1;
                cntone[i] = cntone[i - 1];
            }
            else if (s[i - 1] == '1')
            {
                numone++;
                cntone[i] += cntone[i - 1] + 1;
                cntzero[i] = cntzero[i - 1];
            }
        }

        int ans = 0;
        if (numzero > numone)
        {
            ans = n;
        }
        else
        {
            ans = 0;
        }

        for (int i = 1; i <= n-1; i++)
        {
            if ((cntzero[i] >= cntone[i]) and (cntzero[n] - cntzero[i] <= cntone[n] - cntone[i]) and (abs(((double)n / 2.0) - i) < abs(((double)n / 2.0) - ans)))
            {
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}