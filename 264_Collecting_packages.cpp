/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        int n, x, y, flag = 0;
        cin >> n;
        vector<pair<int, int>> vec;
        vec.push_back(make_pair(0, 0));
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            vec.push_back(make_pair(x, y));
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            if ((vec[i].first > vec[i + 1].first) || (vec[i].second > vec[i + 1].second))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("NO\n");
        }
        else if (flag == 0)
        {
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                if (vec[i].first != vec[i + 1].first && (vec[i].second == vec[i + 1].second))
                {
                    int x = vec[i + 1].first - vec[i].first;
                    while (x--)
                    {
                        printf("R");
                    }
                }
                else if ((vec[i].second != vec[i + 1].second) && (vec[i].first == vec[i + 1].first))
                {
                    int x = vec[i + 1].second - vec[i].second;
                    while (x--)
                    {
                        printf("U");
                    }
                }
                else if ((vec[i].first != vec[i + 1].first) && (vec[i].second != vec[i + 1].second))
                {
                    int x = vec[i + 1].first - vec[i].first;
                    int y = vec[i + 1].second - vec[i].second;
                    while (x--)
                    {
                        printf("R");
                    }
                    while (y--)
                    {
                        printf("U");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}