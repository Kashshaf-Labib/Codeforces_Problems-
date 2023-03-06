/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> v(m);
        for (auto &it : v) 
        {
            cin >> it;
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        int maxx = *max_element(v.begin(), v.end());
        int sum2 = (maxx * (maxx + 1)) / 2;
        int x;
        x = sum2 - sum;
        if (x == s)
            cout << "YES" << endl;
        else if (x > s)
            cout << "NO" << endl;
        else if (x < s)
        {
            for (int i = maxx + 1;; i++)
            {
                x = x + i;
                if (x == s)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if (x > s)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}