/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int oddCase(vector<int> &v, int k)
{
    vector<int> prefix(v.size()), suffix(v.size());
    prefix[0] = 0;
    suffix[v.size() - 1] = 0;

    for (int i = 1; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            prefix[i] = prefix[i - 1];
        }
        else if (i % 2 == 1)
        {
            prefix[i] = prefix[i - 1] + ((v[i] - v[i - 1]) / k);
        }
    }

    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            suffix[i] = suffix[i + 1];
        }
        else if (i % 2 == 1)
        {
            suffix[i] = suffix[i + 1] + ((v[i + 1] - v[i]) / k);
        }
    }

    int ans = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        ans = min(ans, prefix[i] + suffix[i]);
    }

    return ans;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            mp[v[i] % k].push_back(v[i]);
        }

        for (auto x : mp)
        {
            sort(x.second.begin(), x.second.end());
        }

        int oddCnt = 0;

        for (auto x : mp)
        {
            if (x.second.size() % 2 != 0)
            {
                oddCnt++;
            }
        }
        if (oddCnt > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ans = 0;
            for (auto x : mp)
            {
                if (x.second.size() % 2 == 0)
                {
                    ll temp = 0;
                    for (int i = 1; i < x.second.size(); i += 2)
                    {
                        temp += (x.second[i] - x.second[i - 1]) / k;
                        ans += temp;
                        temp = 0;
                    }
                }
                else if (x.second.size() % 2 == 1)
                {
                    ans += oddCase(x.second, k);
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}