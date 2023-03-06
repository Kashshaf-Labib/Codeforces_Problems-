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
        int n, flag = 0, i;
        long long c = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        if (n == 1)
        {
            flag = 0;
        }
        else
        {
            int maxx = v[n - 1];
            for (i = n - 2; i >= 0; i--)
            {

                if (maxx == 0)
                {
                    flag = 1;
                }
                else if (v[i] < maxx)
                {
                    maxx = v[i];
                    continue;
                }
                else if (v[i] >= maxx)
                {
                    while (v[i] >= maxx)
                    {
                        v[i] = v[i] / 2;
                        c = c + 1;
                    }
                }
                maxx = v[i];
            }
        }

        if (flag == 0)
        {
            cout << c << endl;
        }
        else if (flag == 1)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}