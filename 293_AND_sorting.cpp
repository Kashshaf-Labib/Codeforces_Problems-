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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != i)
            {
                v2.push_back(v1[i]);
            }
        }
        int ans = v2[0];
        for (int i = 0; i < v2.size(); i++)
        {
            ans = (ans & v2[i]);
        }
        cout << ans << endl;
    }

    return 0;
}