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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            v2[i] = v1[i];
        }
        bool ans = true;
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(v1.begin(), v1.end(), i) - v1.begin();
            if (n - it != v2[i])
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}