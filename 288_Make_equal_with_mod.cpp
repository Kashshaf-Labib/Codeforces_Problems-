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
        int flag = 0;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool cone = binary_search(v.begin(), v.end(), 1);
        if (!cone)
        {
            cout << "YES" << endl;
        }
        else if (cone)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i + 1] - v[i] == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}