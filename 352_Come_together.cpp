/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        int xa, ya, xb, yb, xc, yc;
        int ans;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if ((xa - xb >= 0 and xa - xc < 0) or (xa - xb < 0 and xa - xc >= 0)) // opposite dir in x axis
        {
            if ((ya - yb >= 0 and ya - yc < 0) or (ya - yb < 0 and ya - yc >= 0)) // y opp dir
            {
                cout << 1 << endl;
            }
            else // y same dir
            {
                ans = 1;
                int mnm1 = abs(ya - yb);
                int mnm2 = abs(ya - yc);
                cout << max(min(mnm1, mnm2) + 1, ans) << endl;
            }
        }
        else if ((ya - yb >= 0 and ya - yc < 0) or (ya - yb < 0 and ya - yc >= 0)) // opposite dir in y axis
        {
            if ((xa - xb >= 0 and xa - xc < 0) or (xa - xb < 0 and xa - xc >= 0)) // x opp dir
            {
                cout << 1 << endl;
            }
            else // x same dir
            {
                ans = 1;
                int mnm1 = abs(xa - xb);
                int mnm2 = abs(xa - xc);
                cout << max(min(mnm1, mnm2) + 1, ans) << endl;
            }
        }
        else if (((xa - xb >= 0 and xa - xc >= 0) or (xa - xb < 0 and xa - xc < 0)) and ((ya - yb >= 0 and ya - yc >= 0) or (ya - yb < 0 and ya - yc < 0)))
        {
            int mnm1 = abs(xa - xb);
            int mnm2 = abs(xa - xc);
            int x = min(mnm1, mnm2) + 1;
            int mnm3 = abs(ya - yb);
            int mnm4 = abs(ya - yc);
            cout << min(mnm3, mnm4) + x << endl;
        }
    }

    return 0;
}