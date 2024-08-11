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
        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            sort(temp.begin(), temp.end());
            v.push_back(temp);
        }

        vector<pair<ll, ll>> pr;

        pair<ll, ll> rud;

        for (int i = 0; i < v.size(); i++)
        {
            ll curr = 0, pen = 0, points = 0, rem = h;
            for (int j = 0; j < v[i].size(); j++)
            {
                int y = v[i][j];
                if (y <= rem)
                {
                    rem -= y;
                    curr += y;
                    points++;
                    pen += curr;
                }
                else
                {
                    pr.push_back({points, pen});
                    if (i == 0)
                    {
                        rud = {points, pen};
                    }
                    break;
                }
                if (j == v[i].size() - 1)
                {
                    pr.push_back({points, pen});
                    if (i == 0)
                    {
                        rud = {points, pen};
                    }
                }
            }
        }


        sort(pr.begin(), pr.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
             {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second; });

        for (int i = 0; i < pr.size(); i++)
        {
            if (pr[i].first == rud.first && pr[i].second == rud.second)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}