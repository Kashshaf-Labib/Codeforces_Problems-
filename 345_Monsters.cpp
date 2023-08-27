/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sortCondition(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
    {
        return false;
    }
    if (a.first == b.first)
    {
        return a.second < b.second;
    }

    return true;
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
        int arr[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int x = arr[i] % k;
            if (x == 0)
            {
                x = k;
            }
            v.push_back({x, i});
        }

        sort(v.begin(), v.end(), sortCondition);

        for (auto x : v)
        {
            cout << x.second + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}