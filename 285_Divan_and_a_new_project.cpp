/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v1;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v1.emplace_back(make_pair(x, i + 1));
        }
        ll headind = ceil((double)(n + 1) / 2);
        ll col = headind - 1;
        ll cor = headind + 1;
        sort(v1.rbegin(), v1.rend());
        vector<pair<ll, ll>> ans;
        ll time = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                ans.emplace_back(make_pair(col, v1[i].second));
                time += abs(headind - col) * v1[i].first;
                col--;
            }
            else
            {
                ans.emplace_back(make_pair(cor, v1[i].second));
                time += abs(headind - cor) * v1[i].first;
                cor++;
            }
        }
        sort(ans.begin(), ans.end(), sortbysec);
        cout << 2*time << endl;
        cout << headind << " ";
        for (auto it : ans)
        {
            cout << it.first << " ";
        }
        cout << endl;
    }

    return 0;
}