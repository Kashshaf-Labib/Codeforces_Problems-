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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (n % 2 == 0)
        {
            if (mp.size() <= 2)
            {
                auto it = mp.begin();
                int x = it->second;
                bool flag = true;
                for (auto it : mp)
                {
                    if (it.second != x)
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            if (mp.size() == 1)
            {
                cout << "Yes" << endl;
            }
            else if (mp.size() == 2)
            {
                auto it1 = mp.begin(), it2 = next(mp.begin());
                int x1 = it1->second, x2 = it2->second;
                if (abs(x1 - x2) == 1)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
