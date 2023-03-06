/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0, u = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (vp[i].first == vp[j].first)
                {
                    if (vp[i].second > vp[j].second)
                    {
                        d = 1;
                    }
                    if (vp[i].second < vp[j].second)
                    {
                        u = 1;
                    }
                }
                if (vp[i].second == vp[j].second)
                {
                    if (vp[i].first > vp[j].first)
                    {
                        l = 1;
                    }
                    if (vp[i].first < vp[j].first)
                    {
                        r = 1;
                    }
                }
            }
        }
        if (l == 1 && r == 1 && u == 1 && d == 1)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}