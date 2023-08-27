/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int inf = 1e9;
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
        string ans = "";
        int mnm = inf;
        bool cross = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1] and cross == false)
            {
                cross = true;
                mnm = min(mnm, v[i]);
                //cout << mnm << " ";
                ans += '1';
                if (v[i + 1] <= mnm)
                {
                    ans += '1';
                    i++;
                }
                else
                {
                    ans += '0';
                    i++;
                }
            }
            else if (cross == false and v[i] <= v[i + 1])
            {
                mnm = min(mnm, v[i]);
                ans += '1';
            }
            else if (cross == true)
            {
                if (v[i] <= mnm)
                {
                    ans += '1';
                }
                else
                {
                    ans += '0';
                }
            }
        }
        if (v[n - 1] <= mnm)
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
        cout << ans << endl;
    }

    return 0;
}