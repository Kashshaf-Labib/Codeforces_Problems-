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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int minusfound = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                minusfound = 1;
                break;
            }
        }
        if (minusfound)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == -1 && v[i + 1] == -1)
                {
                    v[i] = 1;
                    v[i + 1] = 1;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (v[i] == 1 && v[i + 1] == -1)
                    {
                        v[i] = -1;
                        v[i + 1] = 1;
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (v[i] == -1 && v[i + 1] == 1)
                    {
                        v[i] = 1;
                        v[i + 1] = -1;
                        flag = true;
                        break;
                    }
                }
            }
        }
        else if (!minusfound)
        {
            if (v[0] == -1)
            {
                v[0] = 1;
            }
            else if (v[0] == 1)
            {
                v[0] = -1;
            }
            if (v[1] == -1)
            {
                v[1] = 1;
            }
            else if (v[1] == 1)
            {
                v[1] = -1;
            }
        }
        cout << accumulate(v.begin(), v.end(), 0) << endl;
    }

    return 0;
}