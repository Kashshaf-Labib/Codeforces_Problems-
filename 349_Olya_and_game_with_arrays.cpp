/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int inf = 1e9 + 7;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        if (m == 1)
        {
            int n;
            cin >> n;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            cout << *min_element(v.begin(), v.end()) << endl;
        }
        else
        {
            vector<vector<int>> v;
            int most_minm = inf;
            while (m--)
            {
                int n;
                cin >> n;
                vector<int> temp;
                for (int i = 0; i < n; i++)
                {
                    int x;
                    cin >> x;
                    if (x < most_minm)
                    {
                        most_minm = x;
                    }
                    temp.push_back(x);
                }
                sort(temp.begin(), temp.end());
                v.push_back(temp);
            }

            int maxm = -1;
            ll sum_of_seconds = 0;
            int second_minm = inf;

            for (int i = 0; i < v.size(); i++)
            {
                sum_of_seconds += v[i][1];
                if (v[i][1] < second_minm)
                {
                    second_minm = v[i][1];
                }
            }

            cout << sum_of_seconds - second_minm + most_minm << endl;

        }
    }

    return 0;
}