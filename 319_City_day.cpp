/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i - 1; j >= i - x && j >= 0; j--)
        {
            if (v[j] <= v[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            continue;
        }
        for (int k = i + 1; k <= i + y && k < n; k++)
        {
            if (v[k] <= v[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            continue;
        }
        else if (flag)
        {
            cout << i + 1;
            return 0;
        }
    }

    return 0;
}