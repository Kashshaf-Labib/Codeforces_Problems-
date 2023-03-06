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
        int c = 0;
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> v2[j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v1[i] == v2[j])
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}