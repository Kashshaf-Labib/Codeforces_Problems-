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
        // int a, b, xk, yk, xq, yq;
        // cin >> a >> b >> xk >> yk >> xq >> yq;
        // xq -= xk, yq -= yk;
        // xk = 0, yk = 0;

        // vector<pair<int, int>> pr1, pr2;
        // pr1.push_back({xk + a, yk + b});
        // pr1.push_back({xk + a, yk - b});
        // pr1.push_back({xk - a, yk + b});
        // pr1.push_back({xk - a, yk - b});
        // if (a != b)
        // {
        //     pr1.push_back({xk + b, yk + a});
        //     pr1.push_back({xk + b, yk - a});
        //     pr1.push_back({xk - b, yk + a});
        //     pr1.push_back({xk - b, yk - a});
        // }

        // sort(pr1.begin(), pr1.end());

        // pr2.push_back({xq + a, yq + b});
        // pr2.push_back({xq + a, yq - b});
        // pr2.push_back({xq - a, yq + b});
        // pr2.push_back({xq - a, yq - b});
        // if (a != b)
        // {
        //     pr2.push_back({xq + b, yq + a});
        //     pr2.push_back({xq + b, yq - a});
        //     pr2.push_back({xq - b, yq + a});
        //     pr2.push_back({xq - b, yq - a});
        // }

        // sort(pr2.rbegin(), pr2.rend());

        // map<pair<int, int>, int> mp;

        // int cnt = 0;

        // for (int i = 0; i < pr1.size(); i++)
        // {
        //     mp[pr1[i]]++;
        //     mp[pr2[i]]++;
        // }

        // for (auto it : mp)
        // {
        //     if (it.second == 2)
        //     {
        //         cnt++;
        //     }
        // }

        // cout << cnt << endl;

        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<int> dirX = {a, a, -a, -a, b, b, -b, -b};
        vector<int> dirY = {b, -b, b, -b, a, -a, a, -a};

        set<pair<int, int>> st1, st2;

        for (int i = 0; i < 8; i++)
        {
            st1.insert({xk + dirX[i], yk + dirY[i]});
            st2.insert({xq + dirX[i], yq + dirY[i]});
        }

        int cnt = 0;

        for (auto x : st1)
        {
            if (st2.find(x) != st2.end())
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}