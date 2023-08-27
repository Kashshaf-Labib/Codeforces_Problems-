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
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int index = 1;
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1])
            {
                ans.push_back(v[i]);
                index++;
            }
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
                index += 2;
            }
        }
        cout << index << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}