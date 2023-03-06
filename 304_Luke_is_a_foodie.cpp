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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] - x < 0)
            {
                vp[i].first = 0;
            }
            else
            {
                vp[i].first = v[i] - x;
            }
            vp[i].second = v[i] + x;
        }
        int c = 0, first = vp[0].first, second = vp[0].second;
        for (int i = 1; i < n; i++)
        {
            if (vp[i].first > second || vp[i].second < first)
            {
                c++;
                first = vp[i].first;
                second = vp[i].second;
            }
            first = max(first, vp[i].first);
            second = min(second, vp[i].second);
        }
        cout << c << endl;
    }

    return 0;
}