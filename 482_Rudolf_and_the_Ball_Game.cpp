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
        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> throws(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> throws[i].first >> throws[i].second;
        }

        set<int> possible_positions;
        possible_positions.insert(x);

        for (auto x : throws)
        {
            int ri = x.first;
            char ci = x.second;
            set<int> new_positions;

            for (int pos : possible_positions)
            {
                if (ci == '0' || ci == '?')
                {
                    new_positions.insert((pos + ri - 1) % n + 1);
                }
                if (ci == '1' || ci == '?')
                {
                    new_positions.insert((pos - ri - 1 + n) % n + 1);
                }
            }

            possible_positions = new_positions;
        }

        vector<int> result(possible_positions.begin(), possible_positions.end());
        sort(result.begin(), result.end());

        cout << result.size() << endl;
        for (int pos : result)
        {
            cout << pos << " ";
        }
        cout << endl;
    }

    return 0;
}
