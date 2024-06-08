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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            v.push_back(el);
        }

        int last = v.back();
        v.push_back(last + (2 * (x - last)));

        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }

        int maxx = INT_MIN;

        for (int i = 1; i < v.size(); i++)
        {
            int diff = v[i] - v[i - 1];
            maxx = max(maxx, diff);
        }

        cout << maxx << endl;
    }

    return 0;
}