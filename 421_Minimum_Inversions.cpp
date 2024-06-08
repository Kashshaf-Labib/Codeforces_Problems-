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
        int n;
        cin >> n;

        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back({arr1[i], arr2[i]});
        }

        sort(v.begin(), v.end());

        for (auto x : v)
        {
            cout << x.first << " ";
        }
        cout << endl;
        for (auto x : v)
        {
            cout << x.second << " ";
        }
        cout << endl;
    }
    return 0;
}