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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sz = s.size();
        vector<char> odd, even;
        for (int i = 0; i < sz; i++)
        {
            if ((i + 1) % 2 != 0)
            {
                odd.push_back(s[i]);
            }
            else
            {
                even.push_back(s[i]);
            }
        }

        // for (auto x : odd)
        // {
        //     cout << x;
        // }
        // cout << endl;
        // for (auto x : even)
        // {
        //     cout << x;
        // }
        // cout << endl;

        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            int oddcount = 0, evencount = 0;
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            for (int i = 0; i < sz; i++)
            {
                if ((i + 1) % 2 != 0)
                {
                    cout << odd[oddcount++];
                }
                else
                {
                    cout << even[evencount++];
                }
            }
            cout << endl;
        }
    }

    return 0;
}